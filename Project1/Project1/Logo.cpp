#include "Logo.h"
#include "InputManager.h"
#include "SceneManager.h"

#include "ObjectManager.h"
#include "Object.h"
#include "Player.h"
#include "Enemy.h"

#include "ObjectFactory.h"

Logo::Logo() { }

Logo::~Logo() {}

void Logo::Initialize()
{
	ObjectManager::GetInstance()->AddObject(ObjectFactory<Player>::CreateObject());
	SceneManager::GetInstacne()->SetScene(STAGE);
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
	cout << "Logo" << endl;
}

void Logo::Release()
{
}
