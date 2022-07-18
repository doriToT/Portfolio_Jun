#include "Menu.h"
#include "InputManager.h"
#include "SceneManager.h"


Menu::Menu() { }

Menu::~Menu() { }


void Menu::Initialize()
{
}

void Menu::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();
	if (dwKey & KEY_ENTER)
		SceneManager::GetInstacne()->SetScene(STAGE);
}

void Menu::Render()
{
	cout << "Menu" << endl;
}

void Menu::Release()
{
}
