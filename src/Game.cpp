#include "Game.hpp"
#include "Player.hpp"

Game::Game()
{
	p1 = new Player(100, 100, 50, 100, 255, 0, 0);
}

Player* Game::GetP1()
{
	return p1;
}

Game::~Game()
{
}