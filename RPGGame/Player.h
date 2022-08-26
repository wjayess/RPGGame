#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
	Player();

	void AddXP(int amount);

	int GetLevel() const { return lvl; };
	int GetXP() const { return xp; };

private:
	int minLevel;
	int maxLevel;
	int lvl;
	int maxExp;
	int xp;
	int xpData[31] = {
		0,	 // zero-based
		10,  // Level 1
		20,  // Level 2
		30,  // Level 3
		40,  // Level 4
		50,  // Level 5
		60,  // Level 6
		70,  // Level 7
		80,  // Level 8
		90,  // Level 9
		100, // Level 10
		110, // Level 11
		120, // Level 12
		130, // Level 13
		140, // Level 14
		150, // Level 15
		160, // Level 16
		170, // Level 17
		180, // Level 18
		190, // Level 19
		200, // Level 20
		210, // Level 21
		220, // Level 22
		230, // Level 23
		240, // Level 24
		250, // Level 25
		260, // Level 26
		270, // Level 27
		280, // Level 28
		290, // Level 29
		300  // Level 30
	};
};

#endif