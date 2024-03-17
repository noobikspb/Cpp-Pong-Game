#include "Game.h"

void Game::initialization()
{
	ball.radius = 20;
	ball.x = SCREEN_WIDTH / 2;
	ball.y = SCREEN_HEIGHT / 2;
	ball.speedX = 7;
	ball.speedY = 7;

	player.width = 25;
	player.height = 120;
	player.x = SCREEN_WIDTH - player.width - 10;
	player.y = SCREEN_HEIGHT / 2 - player.height / 2;
	player.speed = 6;

	cpu.width = 25;
	cpu.height = 120;
	cpu.x = 10;
	cpu.y = SCREEN_HEIGHT / 2 - player.height / 2;
	cpu.speed = 6;
}

void Game::Updating()
{
	ball.Update();
	player.Update();
	cpu.Update(ball.y);
}

void Game::CheckingForCollisions()
{
	if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.radius, Rectangle{ player.x,player.y,player.width,player.height })) {
		ball.speedX *= -1;
	}
	if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.radius, Rectangle{ cpu.x,cpu.y,cpu.width,cpu.height })) {
		ball.speedX *= -1;
	}
}

void Game::Drawing()
{
	ClearBackground(DarkGreen);
	DrawRectangle(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, Green);
	DrawCircle(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2, 150, LightGreen);
	DrawLine(SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT, WHITE);
	ball.Draw();
	cpu.Draw();
	player.Draw();
	DrawText(TextFormat("%i", cpuScore), SCREEN_WIDTH / 4 - 20, 20, 80, WHITE);
	DrawText(TextFormat("%i", playerScore), 3 * SCREEN_WIDTH / 4 - 20, 20, 80, WHITE);
}
