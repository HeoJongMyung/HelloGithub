#ifndef _INCLUDE_H_
#define _INCLUDE_H_
#define BMax 200

#include <crtdbg.h>
#include "../ConsoleEx3/ConWrap.h"
#include "mmsystem.h"
#include <windows.h>


#include "hero.h" // 위의 헤더파일이 hero.h 파일에 포함 됨

extern SHero g_Hero; // extern = 모든 곳에서 사용 가능하게 함

#include "bullet.h"

extern SBullet g_Bullet[BMax];

#endif