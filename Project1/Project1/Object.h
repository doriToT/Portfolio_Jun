#pragma once
#include "Headers.h"

class Object
{
protected:
	Transform TransInfo;
	string strKey;

	int Color;
	char* Buffer[MAX_SIZE];
public:
	virtual void Initialize()PURE;
	virtual int Update()PURE;
	virtual void Render()PURE;
	virtual void Release()PURE;

	virtual Object* Clone()PURE;
public:
	string GetKey() const { return strKey; }

	Vector3 GetPosition()  const { return TransInfo.Position; }
	void SetPosition(float _x, float _y) { TransInfo.Position = Vector3(_x, _y); }
	void SetPosition(Vector3 _Position) { TransInfo.Position = _Position; }

	Vector3 GetScale() const { return TransInfo.Scale; }
	void SetScale(float _x, float _y) { TransInfo.Scale = Vector3(_x, _y); }
public:
	Object();
	Object(Transform _TransInfo);
	virtual ~Object();
};

