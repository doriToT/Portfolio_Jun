#include "Enemy.h"
#include "CursorManager.h"

Enemy::Enemy() { }
Enemy::Enemy(Transform _TransInfo) : Object(_TransInfo) { }
Enemy::~Enemy() { }


void Enemy::Initialize()
{
	/*
	strKey = "��";

	TransInfo.Position = Vector3(0.0f, 0.0f);
	TransInfo.Rotation = Vector3(0.0f, 0.0f);
	TransInfo.Scale = Vector3(2.0f, 1.0f);
	*/
	
     strKey = "Enemy";

	Buffer[0] = (char*)"ȣ";
	Buffer[1] = (char*)"��";

	TransInfo.Position = Vector3(0.0f, 0.0f);
	TransInfo.Rotation = Vector3(0.0f, 0.0f);
	TransInfo.Scale = Vector3(2.0f, 2.0f);
	
}

int Enemy::Update()
{
	//TransInfo.Position.x -= 2;
	//TransInfo.Position.y += 0.5f;

	if (TransInfo.Position.x <= 0)
		return BUFFER_OVER;

	return 0;
}

void Enemy::Render()
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

void Enemy::Release()
{

}