#include "stdafx.h"

void Affichage(UTILS* _utils, INGAME* _inGame)
{
	sfRenderWindow_clear(_utils->window, sfBlack);

	if (_utils->camera.bool_camera == 0) /// En jeu
	{
		if (_utils->camera.bool_split == 1)
		{
			sfView_setViewport(_utils->camera.camera, (sfFloatRect) { VIEWPORT_FULLSCREEN_ORIGINE, VIEWPORT_FULLSCREEN_ORIGINE, VIEWPORT_SPLITSCREEN_POSITION, VIEWPORT_FULLSCREEN_POSITION }); //Positionnement de la camera
		}
		else
		{
			sfView_setViewport(_utils->camera.camera, (sfFloatRect) { VIEWPORT_FULLSCREEN_ORIGINE, VIEWPORT_FULLSCREEN_ORIGINE, VIEWPORT_FULLSCREEN_POSITION, VIEWPORT_FULLSCREEN_POSITION }); //Positionnement de la camera
		}
		sfView_setCenter(_utils->camera.camera, _inGame->entite[HEROS].position); //Centre la camera sur le personnage
		sfRenderWindow_setView(_utils->window, _utils->camera.camera); // affecte la camera à la fenetre de jeu

		for (int i = 0; i < NB_TILE_MAX; i++)
		{
			for (int j = 0; j < NB_TILE_MAX; j++)
			{
				switch (_inGame->tab_map[i][j])
				{

				case 0:
				{
					Afficher_sprite(_utils, _inGame->sprite.map_white, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}

				//////////////////////////////////////
				case 1:
				{
					Afficher_sprite(_utils, _inGame->sprite.map_white, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 2:
				{
					Afficher_sprite(_utils, _inGame->sprite.map_yellow, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 3:
				{
					Afficher_sprite(_utils, _inGame->sprite.map_red, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 4:
				{
					Afficher_sprite(_utils, _inGame->sprite.map_purple, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 5:
				{
					Afficher_sprite(_utils, _inGame->sprite.map_pink, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 6:
				{
					Afficher_sprite(_utils, _inGame->sprite.map_orange, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 7:
				{
					Afficher_sprite(_utils, _inGame->sprite.map_green, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 8:
				{	Afficher_sprite(_utils, _inGame->sprite.map_brown, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 9:
				{
					Afficher_sprite(_utils, _inGame->sprite.map_blue, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 10:
				{
					Afficher_sprite(_utils, _inGame->sprite.map_black, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				////////////////////////////////////////////
				case 11:
				{
					Afficher_sprite(_utils, _inGame->sprite.qg, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 12:
				{
					Afficher_sprite(_utils, _inGame->sprite.caserne, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 13:
				{
					Afficher_sprite(_utils, _inGame->sprite.usine_vehicule, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 14:
				{
					Afficher_sprite(_utils, _inGame->sprite.aeroport, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 15:
				{
					Afficher_sprite(_utils, _inGame->sprite.port, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 16:
				{
					Afficher_sprite(_utils, _inGame->sprite.mur, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 17:
				{
					Afficher_sprite(_utils, _inGame->sprite.tour, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 18:
				{
					Afficher_sprite(_utils, _inGame->sprite.bouclier, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 19:
				{
					Afficher_sprite(_utils, _inGame->sprite.revenu, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				default:
					break;
				}


				switch (_inGame->tab_perso[i][j])
				{

					//////////////////////////////////////////
				case 20:
				{
					Afficher_sprite(_utils, _inGame->sprite.infanterie_soldat, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 21:
				{
					Afficher_sprite(_utils, _inGame->sprite.infanterie_bazoka, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 22:
				{
					Afficher_sprite(_utils, _inGame->sprite.infanterie_rusher, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 23:
				{
					Afficher_sprite(_utils, _inGame->sprite.infanterie_sniper, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 24:
				{
					Afficher_sprite(_utils, _inGame->sprite.infanterie_assassin, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 25:
				{
					Afficher_sprite(_utils, _inGame->sprite.infanterie_commando, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 26:
				{
					Afficher_sprite(_utils, _inGame->sprite.infanterie_dca, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 27:
				{
					Afficher_sprite(_utils, _inGame->sprite.infanterie_iem, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				///////////////////////////////////
				case 28:
				{
					Afficher_sprite(_utils, _inGame->sprite.vehicule_transport, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 29:
				{
					Afficher_sprite(_utils, _inGame->sprite.vehicule_constructeur, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE}, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 30:
				{
					Afficher_sprite(_utils, _inGame->sprite.vehicule_eclaireur, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 31:
				{
					Afficher_sprite(_utils, _inGame->sprite.vehicule_tank, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 32:
				{
					Afficher_sprite(_utils, _inGame->sprite.vehicule_bouclier, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				///////////////////////////////////
				case 33:
				{
					Afficher_sprite(_utils, _inGame->sprite.aerien_transport, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 34:
				{
					Afficher_sprite(_utils, _inGame->sprite.aerien_helico, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 35:
				{
					Afficher_sprite(_utils, _inGame->sprite.aerien_bombardier, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 36:
				{
					Afficher_sprite(_utils, _inGame->sprite.aerien_chasseur, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				/////////////////////////////////////
				case 37:
				{
					Afficher_sprite(_utils, _inGame->sprite.navale_transport, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 38:
				{
					Afficher_sprite(_utils, _inGame->sprite.navale_cuirasse, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				case 39:
				{
					Afficher_sprite(_utils, _inGame->sprite.navale_sousmarin, (sfVector2f) { (float)i * TAILLE_TILE, (float)j * TAILLE_TILE }, (sfVector2f) { 1, 1 }, 0);
					break;
				}
				////////////////////////////////////
				default:
					break;
				}
			}
		}
		static sfVector2f position_tempo;
		if (_inGame->valeur_dessin != 0)
		{
			position_tempo.x = ((int)_inGame->mouse_absolute.x / TAILLE_TILE) * TAILLE_TILE;
			position_tempo.y = ((int)_inGame->mouse_absolute.y / TAILLE_TILE) * TAILLE_TILE;


			Afficher_sprite(_utils, _inGame->sprite.curseur, position_tempo, (sfVector2f) { 1, 1 }, 0);
		}

		switch (_inGame->entite[HEROS].direction) // affiche les differents sprites du personnage selon sa direction
		{
		case BAS:
		{
			Afficher_sprite(_utils, _inGame->sprite.front, _inGame->entite[HEROS].position, (sfVector2f) { 1, 1 }, 0);
			break;
		}
		case GAUCHE:
		{
			Afficher_sprite(_utils, _inGame->sprite.left, _inGame->entite[HEROS].position, (sfVector2f) { 1, 1 }, 0);
			break;
		}
		case HAUT:
		{
			Afficher_sprite(_utils, _inGame->sprite.back, _inGame->entite[HEROS].position, (sfVector2f) { 1, 1 }, 0);
			break;
		}
		case DROITE:
		{
			Afficher_sprite(_utils, _inGame->sprite.right, _inGame->entite[HEROS].position, (sfVector2f) { 1, 1 }, 0);
			break;
		}
		default:
			break;
		}

		Affichage_editeur(_utils, _inGame);



		if (_utils->camera.bool_split == 1)
		{
			sfView_setViewport(_utils->camera.cameraj2, (sfFloatRect) { 0.5, VIEWPORT_FULLSCREEN_ORIGINE, VIEWPORT_SPLITSCREEN_POSITION, VIEWPORT_FULLSCREEN_POSITION }); //Positionnement de la camera
			sfView_setCenter(_utils->camera.cameraj2, _inGame->entite[HEROS].position); //Centre la camera sur le personnage
			sfRenderWindow_setView(_utils->window, _utils->camera.cameraj2); // affecte la camera à la fenetre de jeu

			switch (_inGame->entite[HEROS].direction) // affiche les differents sprites du personnage selon sa direction
			{
			case BAS:
			{
				Afficher_sprite(_utils, _inGame->sprite.front, _inGame->entite[HEROS].position, (sfVector2f) { 1, 1 }, 0);
				break;
			}
			case GAUCHE:
			{
				Afficher_sprite(_utils, _inGame->sprite.left, _inGame->entite[HEROS].position, (sfVector2f) { 1, 1 }, 0);
				break;
			}
			case HAUT:
			{
				Afficher_sprite(_utils, _inGame->sprite.back, _inGame->entite[HEROS].position, (sfVector2f) { 1, 1 }, 0);
				break;
			}
			case DROITE:
			{
				Afficher_sprite(_utils, _inGame->sprite.right, _inGame->entite[HEROS].position, (sfVector2f) { 1, 1 }, 0);
				break;
			}
			default:
				break;
			}
		}


		sfView_setViewport(_utils->camera.camera_minimap, (sfFloatRect) { POSITION_MINIMAP_X, POSITION_MINIMAP_Y, TAILLE_MINIMAP, TAILLE_MINIMAP }); // Positionnement de la camera de la minimap
		sfRenderWindow_setView(_utils->window, _utils->camera.camera_minimap); // affectation de la minimap a la fenetre
		Afficher_sprite(_utils, _inGame->sprite.minimap, (sfVector2f) { 0, 0 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.arrow, (sfVector2f) { _inGame->entite[HEROS].position.x / (float)COEF_MINIMAP, _inGame->entite[HEROS].position.y / (float)COEF_MINIMAP }, (sfVector2f) { 1, 1 }, _utils->camera.rotation_arrow);
	}
	else if (_utils->camera.bool_camera == 1) /// Carte ouverte
	{
		sfView_setViewport(_utils->camera.camera_minimap, (sfFloatRect) { VIEWPORT_FULLSCREEN_ORIGINE, VIEWPORT_FULLSCREEN_ORIGINE, VIEWPORT_FULLSCREEN_POSITION, VIEWPORT_FULLSCREEN_POSITION }); //Agrandissement de la minimap
		sfRenderWindow_setView(_utils->window, _utils->camera.camera_minimap); // affectation de la camera a la fenetre
		Afficher_sprite(_utils, _inGame->sprite.minimap, (sfVector2f) { 0, 0 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.arrow, (sfVector2f) { _inGame->entite[HEROS].position.x / (float)COEF_MINIMAP, _inGame->entite[HEROS].position.y / (float)COEF_MINIMAP }, (sfVector2f) { 1, 1 }, _utils->camera.rotation_arrow);
	}

	sfRenderWindow_display(_utils->window);
}

void Afficher_sprite(UTILS* _utils, sfSprite* _sprite, sfVector2f _position, sfVector2f _scale, float _rotation)
{
	sfVector2f position = _position;
	sfVector2f scale = _scale;

	sfSprite_setPosition(_sprite, position);
	sfSprite_setScale(_sprite, scale);
	sfSprite_setRotation(_sprite, _rotation);

	sfRenderWindow_drawSprite(_utils->window, _sprite, NULL);
}