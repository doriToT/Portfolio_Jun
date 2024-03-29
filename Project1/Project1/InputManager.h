#pragma once
#include "Headers.h"

class InputManager
{
private:
	static InputManager* Instance;
public:
	static InputManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new InputManager;

		return Instance;
	}
private:
	DWORD Key;
public:
	DWORD GetKey() const { return Key; }

	void InputKey();

private:
	InputManager();
public:
	~InputManager();
};

