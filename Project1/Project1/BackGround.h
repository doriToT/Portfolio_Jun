#pragma once
#include "Object.h"


class BackGround : public Object
{
public:
	virtual void Initialize()override;
	virtual int Update()override;
	virtual void Render()override;
	virtual void Release()override;

	virtual Object* Clone()override { return new BackGround(*this); }
public:
	BackGround();
	BackGround(Transform _TransInfo);
	virtual ~BackGround();
};
