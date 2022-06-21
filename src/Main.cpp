#include "NoEntiendo.hpp"

int main()
{
	NOE_Inicia();
	
	while(!NOE_ObtenTeclaPulsada(NOE_TECLA_ESCAPE))
	{
	
		NOE_Actualiza();
			
		// Actualizar lógica

			
		
		// Dibujado
		
		
		NOE_LimpiaPantalla(0, 0, 0);		
				
		// Dibujar tilemaps
		
		NOE_MuestraPantalla();
	}
	
	NOE_Finaliza();

    return 0;
}