#include "include.h"

void Bullet_Init() // 총알 초기화
{
	for(int i = 0; i < BMax; i++)
	{
		g_Bullet[i].attack = 1;
		g_Bullet[i].x = g_Hero.x;
		g_Bullet[i].y = g_Hero.y;
		g_Bullet[i].speed = 1;
		g_Bullet[i].body = '|';
		g_Bullet[i].fColor = BLACK;
		g_Bullet[i].bColor = BLACK;
		g_Bullet[i].shutup = true;
		g_Bullet[i].count = GetTickCount64();
	}
}

void Bullet_Update()
{
	/*if (IsKey(VK_LEFT) || IsKey(VK_A))
	{
		for (int i = 0; i < BMax; i++)
		{
			g_Bullet[i].x -= g_Bullet[i].speed;
		}
	}

	if (IsKey(VK_RIGHT) || IsKey(VK_D))
	{
		for (int i = 0; i < BMax; i++)
		{
			g_Bullet[i].x += g_Bullet[i].speed;
		}
	}

	if (IsKey(VK_UP) || IsKey(VK_W))
	{
		for (int i = 0; i < BMax; i++)
		{
			g_Bullet[i].y -= g_Bullet[i].speed;
		}00
	}

	if (IsKey(VK_DOWN) || IsKey(VK_S))
	{
		for (int i = 0; i < BMax; i++)
		{
			g_Bullet[i].y += g_Bullet[i].speed;
		}
	}*/

	if (IsKey(VK_SPACE)) // 스페이스바 누르면 
	{
		//Flip();
		//EngineSync(30);
		//while (true)
		for (int i = 0; i < BMax; i++) // 총알 발사
		{
				g_Bullet[i].fColor = WHITE;
				g_Bullet[i].y -= g_Bullet[i].speed;
	
				if (g_Bullet[i].shutup) // shutup이 진실이면 if문 실행
				{
					//g_Bullet[i].attack = 1; 
					g_Bullet[i].x = g_Hero.x;
					g_Bullet[i].y = g_Hero.y; 
					g_Bullet[i].speed = 2;
					g_Bullet[i].body = '|';
					g_Bullet[i].shutup = false;
					g_Bullet[i].count;
					break;
				}
					//g_Bullet[i].count = 0;
		}
		
	}

	for (int i = 0; i < BMax; i++)
	{
		if (g_Bullet[i].y < 0)
		{
			//g_Bullet[i].count;
			g_Bullet[i].shutup = true;
		}
	}

	for (int i = 0; i < BMax; i++)
	{
		//g_Bullet[i].count;
		g_Bullet[i].y--;
	} 
}

void Bullet_Draw()
{
	for (int i = 0; i < BMax; i++)
	{
		DrawCharEx3(g_Bullet[i].x, g_Bullet[i].y - 1, g_Bullet[i].body, g_Bullet[i].fColor, g_Bullet[i].bColor); // 플레이어 그리기
	}
}

void Bullet_Noout()
{
	for (int i = 0; i < BMax; i++)
	{
		if (g_Bullet[i].x <= 0)
		{
			g_Bullet[i].x = 0;
		}

		if (g_Bullet[i].x >= 120 - 2)
		{
			g_Bullet[i].x = 120 - 0.5;
		}

		if (g_Bullet[i].y <= 0)
		{
			g_Bullet[i].y = 0;
		}

		if (g_Bullet[i].y >= 30 - 2)
		{
			g_Bullet[i].y = 30 - 0.5;
		}
	}
}