#include "MainUpdate.h"
#include "InputManager.h"
#include "SceneManager.h"


MainUpdate::MainUpdate()
{
}

MainUpdate::~MainUpdate()
{
}


void MainUpdate::Initialize()
{
	SceneManager::GetInstacne()->SetScene(LOGO);
}

void MainUpdate::Update()
{
	InputManager::GetInstance()->InputKey();
	SceneManager::GetInstacne()->Update();
}

void MainUpdate::Render()
{
	SceneManager::GetInstacne()->Render();
}

void MainUpdate::Release()
{
}
