#include "Include.h"

// �밡���� ǥ���
// int    n�̸�
// char   c�̸�
// bool   b�̸�	
// DWORD  dw�̸�
// short  s�̸�
// long   l�̸�
// ����ü �ɹ������� 
// int m_n�̸�
// char  m_c�̸�
// �۷ι� g_?�̸�
// int nVlaue = 0;
// void Quit();

//int x = 0; // �÷��̾� x ��ġ
//int y = 0; // �÷��̾� y ��ġ

SHero g_Hero;
SBullet g_Bullet[BMax];

int main()
{
		
	Hero_Init();
	Bullet_Init();

	InitialConsole();//�ʱ�ȭ�Լ�
	SetWindowTitle("Shooting"); // �ܼ� �̸�

	while (true)
	{
		CheckInput();
		ClearScreenEx3(BLACK);

		Hero_Update();
		Hero_Draw();
		Hero_Noout();

		Bullet_Update();
		Bullet_Draw();
		Bullet_Noout();

		Flip(); // ���� ���۸�: �̸� ���� �� �����ִ°� ex)���̹� ���� �̸�����?
		EngineSync(30);
	}
	ReleaseConsole();
	return 0;
}
