#pragma once
#include <raylib.h>

extern const int SCREEN_HEIGHT;
extern const int SCREEN_WIDTH;
extern Color Yellow;
extern int playerScore;
extern int cpuScore;

class Ball
{
public:
	float x, y;
	int speedX, speedY;
	int radius;

	void Draw();

	void Update();

	void ResetBall();
};

