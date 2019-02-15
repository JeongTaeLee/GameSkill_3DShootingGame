#include "DXUT.h"
#include "Stage01.h"

//Manager
#include "ObjectManager.h"

//GameObject
#include "PlayerAirplane.h"
#include "SkyBox.h"
#include "MonsterA.h"

Stage01::Stage01()
{
}


Stage01::~Stage01()
{
}

void Stage01::Init()
{
	OBJECT.AddObject<SkyBox>();
	OBJECT.AddObject<PlayerAirplane>();

	OBJECT.AddObject<MonsterA>();
}

void Stage01::Release()
{
	OBJECT.Reset();
}
