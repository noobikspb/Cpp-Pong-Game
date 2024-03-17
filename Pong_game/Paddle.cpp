#include "Paddle.h"

void Paddle::LimitMovement()
{
	if (y <= 0)
		y = 0;
	if (y + height >= SCREEN_HEIGHT)
		y = SCREEN_HEIGHT - height;
}

void Paddle::Draw()
{
	DrawRectangleRounded(Rectangle{ x,y,width,height }, 0.8, 0, WHITE);
}

void Paddle::Update()
{
	if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W))
		y -= speed;
	if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S))
		y += speed;

	LimitMovement();
}
