#pragma once
#include <raylib.h>
#include "Ball.h"
#include "Paddle.h"
#include "CPUPaddle.h"

extern Color DarkGreen;
extern Color Green;
extern Color LightGreen;

class Game
{
public:
	Ball ball;
	Paddle player;
	CPUPaddle cpu;

	void initialization();

	void Updating();

	void CheckingForCollisions();

	void Drawing();
};

