#pragma once

struct SBullet
{
	int x, y;
	char body;
	int attack;
	int speed;
	boolean shutup;
	int count;

	DWORD fColor;
	DWORD bColor;
};

void Bullet_Init();

void Bullet_Update();

void Bullet_Draw();

void Bullet_Noout();