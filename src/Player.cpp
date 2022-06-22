#include "Player.hpp"
#include "NoEntiendo.hpp"

int cursorOffset = 20;

Player::Player(float x, float y, int w, int h, int r, int g, int b)
{
	X = x;
	Y = y;
	width = w;
	height = h;
	R = r;
	G = g;
	B = b;
}

float Player::GetPosX()
{
	return X;
}

float Player::GetPosY()
{
	return Y;
}

int Player::GetWidth()
{
	return width;
}

int Player::getHeight()
{
	return height;
}

void Player::Update()
{
	Y = NOE_ObtenPosicionRatonY();
	DetectColision();
	Draw();
}

void Player::DetectColision()
{
	if (Y - (height / 2) - colisionOffset <= 0)//collides upwards
	{
		Y = colisionOffset + (height / 2);
	}
	else if (Y + (height / 2) + colisionOffset >= NOE_ObtenAltoPantalla() - cursorOffset)//collides downwards
	{
		Y = NOE_ObtenAltoPantalla() - colisionOffset - cursorOffset - (height / 2);
	}
}

void Player::Draw()
{
	NOE_DibujaCaja(X, Y - (height/2) + colisionOffset, width, height, R, G, B);
}

Player::~Player()
{
}