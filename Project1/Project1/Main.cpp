
#include "Headers.h"
#include "MainUpdate.h"

int main(void)
{
	system("title √÷¡ÿºˆ - Flight Game");

	system("mode con cols=160 lines=40");

	MainUpdate Main;

	Main.Initialize();

	ULONGLONG Time = GetTickCount64();

	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			Main.Update();
			Main.Render();
		}
	}


	return 0;
}