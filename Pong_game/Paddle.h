#pragma once
#include <raylib.h>

extern const int SCREEN_HEIGHT;

class Paddle
{
protected:

	void LimitMovement();
public:
	float x, y;
	float width, height;
	int speed;

	void Draw();

	void Update();
};

