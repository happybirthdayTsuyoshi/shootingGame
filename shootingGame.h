#pragma once

//構造体の宣言
struct OBJECT
{
	int x;
	int y;
	int vx;
	int vy;
	int state;
	int pattern;
	int image;
	int wid;
	int hei;
	int shield;
	int timer;
};

//関数プロトタイプ宣言
void initGame(void);
void scrollBG(int spd);
void initVariable(void);
void drawImage(int img, int x, int y);
void movePlayer(void);
void setBullet(void);
void moveBullet(void);
int setEnemy(int x, int y, int vx, int vy, int ptn, int img, int sld);
void moveEnemy(void);
void stageMap(void);
void damageEnemy(int n, int dmg);
void drawText(int x, int y, const char* txt, int val, int col, int siz);
void drawParameter(void);
void setEffect(int x, int y, int ptn);
void drawEffect(void);
void setItem(void);
void moveItem(void);
void drawTextC(int x, int y, const char* txt, int col, int siz);