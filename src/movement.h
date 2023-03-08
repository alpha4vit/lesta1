#pragma once


#include<SFML/Graphics.hpp>
#include"Enemy.h"
using namespace std;
using namespace sf;

void moveUp(Sprite& tank, float& speedTank);
void moveDown(Sprite& tank, float& speedTank, int screenHeight);
void moveRight(Sprite& tank, float& speedTank, int screenWidth);
void moveLeft(Sprite& tank, float& speedTank);
void rotateEnemy(Enemy& enemy);
bool checkColl(const Tank& tank, Enemy& enemy);
