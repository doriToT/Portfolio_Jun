#include "Bullet.h"
#include "CursorManager.h"

Bullet::Bullet() { }

Bullet::Bullet(Transform _TransInfo)
{
}

Bullet::~Bullet() { }


void Bullet::Initialize()
{
	
	strKey = "Bullet";

	Buffer[0] = (char*)"��";
	Buffer[1] = (char*)"��";

	TransInfo.Position = Vector3(0.0f, 0.0f);
	TransInfo.Rotation = Vector3(0.0f, 0.0f);
	TransInfo.Scale = Vector3(2.0f, 2.0f);
	
	Vector3 Target = Vector3(60.0f, 15.0f);

	Vector3 Result = Target - TransInfo.Position;


	float Distance = sqrt((Result.x * Result.x) + (Result.y * Result.y));

	TransInfo.Direction /= Distance;
}

int Bullet::Update()
{
	//TransInfo.Position.x += 2.0f;

	Vector3 Target = Vector3(60.0f, 15.0f);

	/*
	// �̵� �ӵ� ������ ���
	Vector3 TargetVector = Target - TransInfo.Position; // �� �κ��� Initialize�� ������ �ȉ�
	float Distance = sqrt((TargetVector.x * TargetVector.x) + (TargetVector.y * TargetVector.y));

	// ������ ������ � ���⿡���� ��ǥ�� ���� (�뷫) ������ �ӵ��� �̵�.
	TransInfo.Direction.x = TargetVector.x / Distance;
	TransInfo.Direction.y = TargetVector.y / Distance;

	// �̵� �� (���⿡ �ӵ� ���� ���ϱ�) : Update�� ���� ��
	TransInfo.Position += TransInfo.Direction;

	float Average = sqrt(
		(TransInfo.Direction.x * TransInfo.Direction.x) +
		(TransInfo.Direction.y * TransInfo.Direction.y));
	*/

	//���� ��� ����ź ����

	float Width = Target.x - TransInfo.Position.x;
	float Height = Target.y - TransInfo.Position.y;

	float Distance = sqrt((Width * Width) + (Height * Height));

	TransInfo.Direction = Vector3(Width / Distance, Height / Distance);

	TransInfo.Position += TransInfo.Direction;

	return 0;
}

void Bullet::Render()
{
	CursorManager::GetInstance()->WriteBuffer(
		TransInfo.Position, (char*)"ABCDEFG");
	
}

void Bullet::Release()
{

}
