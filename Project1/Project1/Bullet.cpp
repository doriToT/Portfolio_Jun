#include "Bullet.h"
#include "CursorManager.h"

Bullet::Bullet() { }

Bullet::Bullet(Transform _TransInfo)
{
}

Bullet::~Bullet() { }


void Bullet::Initialize()
{
	/*
	strKey = "*";

	TransInfo.Position = Vector3(0.0f, 0.0f);
	TransInfo.Rotation = Vector3(0.0f, 0.0f);
	TransInfo.Scale = Vector3(2.0f, 1.0f);
	*/
	
	strKey = "Bullet";

	Buffer[0] = (char*)"¡¬";
	Buffer[1] = (char*)"£¯";

	TransInfo.Position = Vector3(0.0f, 0.0f);
	TransInfo.Rotation = Vector3(0.0f, 0.0f);
	TransInfo.Scale = Vector3(2.0f, 2.0f);
	
}

int Bullet::Update()
{
	TransInfo.Position.x += 2.0f;

	return 0;
}

void Bullet::Render()
{
	/*
	CursorManager::Draw(
		TransInfo.Position.x,
		TransInfo.Position.y,
		strKey);
    */
	
	for (int i = 0; i < MAX_SIZE; ++i)
	{
		CursorManager::Draw(
			TransInfo.Position.x - (TransInfo.Scale.x * 0.5f),
			TransInfo.Position.y - (TransInfo.Scale.x * 0.5f) + i,
			Buffer[i]);
	}
	
}

void Bullet::Release()
{

}
