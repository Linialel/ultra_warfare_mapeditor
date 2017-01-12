#include "stdafx.h"

void Boucle_de_jeu(UTILS* _utils, INGAME* _inGame)
{
	while (sfRenderWindow_isOpen(_utils->window))
	{
		//Opération à faire à chaque nouvelle frame
		_utils->time = sfClock_restart(_utils->horloge); //Restart de l'horloge
		_utils->fDeltatime = sfTime_asMilliseconds(_utils->time); //Récuparation du temps en milliseconde entre deux frame
		sfVector2i mouseI = sfMouse_getPositionRenderWindow(_utils->window); //récupère la position de a souris à l'écran
		_inGame->mouse_relative.x = (float)mouseI.x;
		_inGame->mouse_relative.y = (float)mouseI.y;
		_inGame->mouse_absolute = sfRenderWindow_mapPixelToCoords(_utils->window, (sfMouse_getPosition(_utils->window)), _utils->camera.camera);
		printf("\r %0.0f %0.0f\t", _utils->camera.taille_camera.x, _utils->camera.taille_camera.y);
		Commande(_utils, _inGame);

		sfView_setSize(_utils->camera.camera, _utils->camera.taille_camera);

		Affichage(_utils, _inGame);
	}
}