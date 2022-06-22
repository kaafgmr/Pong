#ifndef __GAME_HPP__
#define __GAME_HPP__

class Player;

class Game
{
	public:
		Game();
		Player* GetP1();
		~Game();

	private:
		Player* p1;
};

#endif