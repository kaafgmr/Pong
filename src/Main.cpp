#include <stdio.h>
#include <stdlib.h>
#include "Game.hpp"
#include "Player.hpp"
#include "NoEntiendo.hpp"

enum State
{
	MAINMENU,
	PLAY,
	OPTIONS,
	EXIT
};

bool exitApp = false;
State AppState = PLAY;

int main()
{
	NOE_Inicia();

	Game* game = new Game();
	
	while(!exitApp)
	{
		NOE_Actualiza();
		
		NOE_LimpiaPantalla(0, 0, 0);

		if (NOE_ObtenTeclaPulsada(NOE_TECLA_ESCAPE))//temporary
		{
			exitApp = true;
		}

		if (AppState == MAINMENU)
		{
			
		}
		else if (AppState == PLAY)
		{
			game->GetP1()->Update();
		}
		else if (AppState == OPTIONS)
		{

		}
		else if (AppState == EXIT)
		{

		}
		
		NOE_MuestraPantalla();
	}
	
	NOE_Finaliza();

    return 0;
}