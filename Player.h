#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
	Player();

	void AddXP(int amount);

	int GetLevel() const { return lvl; };
	int GetXP() const { return xp; };
	int GetXPAlgorithm() const { return ((lvl + 1) * 10); };

private:
	int minLevel;
	int maxLevel;
	int lvl;
	int maxExp;
	int xp;
};

#endif