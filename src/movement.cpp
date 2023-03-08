#pragma once
#include"movement.h"


void moveUp(Sprite& tank, float& speedTank)
{
	tank.setRotation(0);
	if (tank.getPosition().y - 180 > 0) {
		tank.move(0, -speedTank);
	}
}

void moveDown(Sprite& tank, float& speedTank, int screenHeight)
{
	tank.setRotation(180);
	if (tank.getPosition().y + 175 < screenHeight) {
		tank.move(0, speedTank);
	}
}

void moveRight(Sprite& tank, float& speedTank ,int screenWidth)
{
	tank.setRotation(90);
	if (tank.getPosition().x + 186 < screenWidth) {
		tank.move(speedTank, 0);
	}
}

void moveLeft(Sprite& tank, float& speedTank)
{
	tank.setRotation(270);
	if (tank.getPosition().x - 178 > 0) {
		tank.move(-speedTank, 0);
	}
}

void rotateEnemy(Enemy& enemy)
{
	enemy.sprite.setRotation(enemy.sprite.getRotation() + 0.5);
}

bool checkColl(const Tank& tank, Enemy& enemy)
{
	int posTX = tank.sprite.getPosition().x;
	int posTY = tank.sprite.getPosition().y;
	int widthT = tank.sprite.getTextureRect().width;
	int height = tank.sprite.getTextureRect().height;
	int posEX = enemy.sprite.getOrigin().x;
	int posEY = enemy.sprite.getOrigin().y;
	
	if (posTX + widthT > posEX && posTX < posEX && posTY + height > posEY && posTY < posEY) {
		return true;
	}
	return false;

}
