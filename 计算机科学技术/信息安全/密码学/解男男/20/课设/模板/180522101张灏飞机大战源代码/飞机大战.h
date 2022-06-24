#pragma once
#include<windows.h>
#include <iostream>
using namespace std;
typedef struct Frame
{
	COORD position[2];
	int flag;
}Frame;
class Game
{
public:
	COORD position[10];//位置
	COORD bullet[10];//炮弹
	Frame enemy[8];//敌人
	int score;
	int rank;
	int rankf;
	string title;
	int flag_rank;

	Game();

	//初始化所有。自己飞机，炮弹，敌人（障碍物）
	void initPlane();
	void initBullet();
	void initEnemy();
	void planeMove(char);
	void bulletMove();
	void enemyMove();

	//填充所有
	void drawPlane();
	void drawPlaneToNull();
	void drawBullet();
	void drawBulletToNull();
	void drawEnemy();
	void drawEnemyToNull();

	//填充其中一个
	void drawThisBulletToNull(COORD);
	void drawThisEnemyToNull(Frame);

	void Pause();
	void Playing();
	void judgePlane();
	void judgeEnemy();
	void Shoot();
	void GameOver();
	void printScore();
};