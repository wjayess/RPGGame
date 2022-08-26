#include "Main.h"
#include "Player.h"

Player::Player()
{
	minLevel = 1;
	maxLevel = 30;
	lvl = 1;
	maxExp = 1000000;
	xp = 0;
}

void Player::AddXP(int amount)
{
	if (xp + amount > maxExp)
		xp += (maxExp - xp);
	else
		xp += amount;

	while (xp >= xpData[lvl])
	{
		lvl = ClampInt(lvl + 1, minLevel, maxLevel);
	}
}