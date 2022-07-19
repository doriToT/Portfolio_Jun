#include "Logo.h"
#include "InputManager.h"
#include "SceneManager.h"
#include "CursorManager.h"
#include "ObjectManager.h"
#include "Object.h"
#include "Player.h"
#include "Enemy.h"

#include "ObjectFactory.h"

Logo::Logo() { }

Logo::~Logo() {}

void Logo::Initialize()
{
	//ObjectManager::GetInstance()->AddObject(ObjectFactory<Player>::CreateObject());
	//SceneManager::GetInstacne()->SetScene(STAGE);
	//Object* pEnemy = new Enemy;
	//pEnemy->Initialize();
	//ObjectManager::GetInstance()->AddObject(pEnemy);
}

void Logo::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();
	if (dwKey & KEY_ENTER)
		SceneManager::GetInstacne()->SetScene(MENU);
}

void Logo::Render()
{
	CursorManager::GetInstance()->WriteBuffer(37.0f, 4.0f, (char*)".........................................................................................");
	CursorManager::GetInstance()->WriteBuffer(37.0f, 5.0f, (char*)".######..##......######...####...##..##..######...........####....####...##...##..######.");
	CursorManager::GetInstance()->WriteBuffer(37.0f, 6.0f, (char*)".##......##........##....##......##..##....##............##......##..##..###.###..##.....");
	CursorManager::GetInstance()->WriteBuffer(37.0f, 7.0f, (char*)".####....##........##....##.###..######....##............##.###..######..##.#.##..####...");
	CursorManager::GetInstance()->WriteBuffer(37.0f, 8.0f, (char*)".##......##........##....##..##..##..##....##............##..##..##..##..##...##..##.....");
	CursorManager::GetInstance()->WriteBuffer(37.0f, 9.0f, (char*)".##......######..######...####...##..##....##.............####...##..##..##...##..######.");
	CursorManager::GetInstance()->WriteBuffer(37.0f, 10.0f, (char*)".........................................................................................");

	CursorManager::GetInstance()->WriteBuffer(62.0f, 13.0f, (char*)"---------PRESS ENTER TO START!---------");
}

void Logo::Release()
{
}
