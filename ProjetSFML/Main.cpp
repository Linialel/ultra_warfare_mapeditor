// TestCSFML.cpp : définit le point d'entrée pour l'application console.
//
#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//Initialisation de toutes les variables des structures
	UTILS utils = { 0 };
	INGAME inGame = { 0 };

	//Déclaration du VideoMode qui contient la résolution et la profondeur de couleurs (32)
	//On en aura besoin pour la création de la fenêtre
	utils.mode.height = HAUTEUR_FENETRE;
	utils.mode.width = LARGEUR_FENETRE;
	utils.mode.bitsPerPixel = BITS_PIXEL;

	srand((unsigned)time(NULL));

	//Création de la fenêtre en précisant le VideoMode, le titre de la fenêtre, la possibilité de l'étendre et la fermer
	// sfFullscreen | 
	utils.window = sfRenderWindow_create(utils.mode, "SFML window", sfResize | sfClose, NULL);
	utils.camera.camera = sfRenderWindow_getDefaultView(utils.window);
	sfRenderWindow_setFramerateLimit(utils.window, FPS);
	utils.horloge = sfClock_create();



	Initialisation(&utils, &inGame);

	Boucle_de_jeu(&utils, &inGame);


	return 0;
}