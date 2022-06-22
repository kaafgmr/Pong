#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

class Player
{
	public:
		Player(float x, float y, int w, int h, int r, int g, int b);
		float GetPosX();
		float GetPosY();
		int GetWidth();
		int getHeight();
		void Update();
		void DetectColision();
		void Draw();
		~Player();

	private:
		float X;
		float Y;
		int height;
		int width;
		int R;
		int G;
		int B;
		int colisionOffset = 10;
};

#endif