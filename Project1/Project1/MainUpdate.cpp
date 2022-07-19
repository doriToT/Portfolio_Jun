#include "MainUpdate.h"
#include "InputManager.h"
#include "SceneManager.h"
#include "MainUpdate.h"
#include "SceneManager.h"
#include "CursorManager.h"

MainUpdate::MainUpdate()
{
}

MainUpdate::~MainUpdate()
{
}


void MainUpdate::Initialize()
{
	CursorManager::GetInstance()->CreateBuffer(ConsoleWidthSize, ConsoleHeightSize);
	SceneManager::GetInstacne()->SetScene(LOGO);
}

void MainUpdate::Update()
{
	InputManager::GetInstance()->InputKey();
	SceneManager::GetInstacne()->Update();

	CursorManager::GetInstance()->FlippingBuffer();
}

void MainUpdate::Render()
{
	SceneManager::GetInstacne()->Render();
}

void MainUpdate::Release()
{
}
