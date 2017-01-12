// TestCSFML.cpp�: d�finit le point d'entr�e pour l'application console.
//
#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//Initialisation de toutes les variables des structures
	UTILS utils = { 0 };
	INGAME inGame = { 0 };

	//D�claration du VideoMode qui contient la r�solution et la profondeur de couleurs (32)
	//On en aura besoin pour la cr�ation de la fen�tre
	utils.mode.height = HAUTEUR_FENETRE;
	utils.mode.width = LARGEUR_FENETRE;
	utils.mode.bitsPerPixel = BITS_PIXEL;

	srand((unsigned)time(NULL));

	//Cr�ation de la fen�tre en pr�cisant le VideoMode, le titre de la fen�tre, la possibilit� de l'�tendre et la fermer
	// sfFullscreen | 
	utils.window = sfRenderWindow_create(utils.mode, "SFML window", sfResize | sfClose, NULL);
	utils.camera.camera = sfRenderWindow_getDefaultView(utils.window);
	sfRenderWindow_setFramerateLimit(utils.window, FPS);
	utils.horloge = sfClock_create();



	Initialisation(&utils, &inGame);

	Boucle_de_jeu(&utils, &inGame);


	return 0;
}