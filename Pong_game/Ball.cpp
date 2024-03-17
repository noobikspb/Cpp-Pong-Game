#include "Ball.h"

void Ball::Draw()
{
	DrawCircle(x, y, radius, Yellow);
}

void Ball::Update()
{
	x += speedX;
	y += speedY;

	if (y + radius >= SCREEN_HEIGHT || y - radius <= 0) {
		speedY *= -1;
	}

	if (x + radius >= SCREEN_WIDTH) {
		cpuScore++;
		ResetBall();
	}
	if (x - radius <= 0) {
		playerScore++;
		ResetBall();
	}
}

void Ball::ResetBall()
{
	x = SCREEN_WIDTH / 2;
	y = SCREEN_HEIGHT / 2;

	int speedChoices[2] = { -1,1 };
	speedX *= speedChoices[GetRandomValue(0, 1)];
	speedY *= speedChoices[GetRandomValue(0, 1)];
}
