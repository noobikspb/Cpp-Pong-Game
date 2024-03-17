#include <iostream>
#include <raylib.h>
#include "Game.h"

const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 800;

Color Green = Color{ 38,185,154,255 };
Color DarkGreen = Color{ 20,160,133,255 };
Color LightGreen = Color{ 129,204,184,255 };
Color Yellow = Color{ 243,213,91,255 };

int playerScore = 0;
int cpuScore = 0;

int main() {
	InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "My Pong Game");
	SetTargetFPS(60);
	
	Game game;
	game.initialization();

	while (!WindowShouldClose()) {
		BeginDrawing();

		//Updating
		game.Updating();

		//Checking for collisions
		game.CheckingForCollisions();

		//Drawing
		game.Drawing();	

		EndDrawing();
	}

	CloseWindow();
}