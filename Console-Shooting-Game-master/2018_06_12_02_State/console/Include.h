#ifndef _INCLUDE_H_
#define _INCLUDE_H_
#define BMax 200

#include <crtdbg.h>
#include "../ConsoleEx3/ConWrap.h"
#include "mmsystem.h"
#include <windows.h>


#include "hero.h" // ���� ��������� hero.h ���Ͽ� ���� ��

extern SHero g_Hero; // extern = ��� ������ ��� �����ϰ� ��

#include "bullet.h"

extern SBullet g_Bullet[BMax];

#endif