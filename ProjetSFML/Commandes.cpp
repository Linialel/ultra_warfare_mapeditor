#include "stdafx.h"

void Cmd_temps_reel(UTILS* _utils, INGAME* _inGame)
{
	////////////////////////////////////////////////

	if (sfKeyboard_isKeyPressed(sfKeyW)) //permet de revenir en jeu si la carte est ouverte
	{
		_utils->camera.bool_camera = 0;
	}
	if (sfKeyboard_isKeyPressed(sfKeyX)) // permet d'ouvrir la carte
	{
		_utils->camera.bool_camera = 1;
	}

	if (sfKeyboard_isKeyPressed(sfKeyO)) // permet d'ouvrir la carte
	{
		sfView_zoom(_utils->camera.camera, 2);
	}

	if (sfKeyboard_isKeyPressed(sfKeyP)) // permet d'ouvrir la carte
	{
		sfView_zoom(_utils->camera.camera, 0.5);
	}

	if (sfKeyboard_isKeyPressed(sfKeyC)) //permet de revenir en jeu si la carte est ouverte
	{
		_utils->camera.bool_split = 0;
	}
	if (sfKeyboard_isKeyPressed(sfKeyV)) // permet d'ouvrir la carte
	{
		_utils->camera.bool_split = 1;
	}
	//////////////////////////////////////////////////

	if (_utils->camera.bool_camera == 0) //si la carte n'est pas ouverte permet de se deplacer
	{
		if (sfKeyboard_isKeyPressed(sfKeyQ))
		{
			_inGame->entite[HEROS].direction = GAUCHE;
			_utils->camera.rotation_arrow = 90;
			_inGame->entite[HEROS].position.x -= 10;
		}
		if (sfKeyboard_isKeyPressed(sfKeyD))
		{
			_inGame->entite[HEROS].direction = DROITE;
			_utils->camera.rotation_arrow = 270;
			_inGame->entite[HEROS].position.x += 10;
		}
		if (sfKeyboard_isKeyPressed(sfKeyZ))
		{
			_inGame->entite[HEROS].direction = HAUT;
			_utils->camera.rotation_arrow = 180;
			_inGame->entite[HEROS].position.y -= 10;
		}
		if (sfKeyboard_isKeyPressed(sfKeyS))
		{
			_inGame->entite[HEROS].direction = BAS;
			_utils->camera.rotation_arrow = 0;
			_inGame->entite[HEROS].position.y += 10;
		}
	}
	//////////////////////////////////////////////////
	if (sfMouse_isButtonPressed(sfMouseRight))
	{
		if (_inGame->mouse_absolute.x > 0 &&
			_inGame->mouse_absolute.x < NB_TILE_MAX * TAILLE_TILE  -1&&
			_inGame->mouse_absolute.y > 0 &&
			_inGame->mouse_absolute.y < NB_TILE_MAX * TAILLE_TILE -1)
		{
			if (_inGame->valeur_dessin == 0)
			{
				_inGame->tab_perso[(int)_inGame->mouse_absolute.x / TAILLE_TILE][(int)_inGame->mouse_absolute.y / TAILLE_TILE] = 0;
			}
		}
	}

	if (sfMouse_isButtonPressed(sfMouseLeft))
	{
		if (_inGame->mouse_absolute.x > _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 &&
			_inGame->mouse_absolute.x < _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE)
		{
			if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) + TAILLE_TILE)
			{
				_inGame->menu_edition = 1;
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 2 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 2 + TAILLE_TILE)
			{
				_inGame->menu_edition = 2;
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 3 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 3 + TAILLE_TILE)
			{
				_inGame->menu_edition = 3;
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 4 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 4 + TAILLE_TILE)
			{
				_inGame->menu_edition = 4;
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 5 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 5 + TAILLE_TILE)
			{
				_inGame->menu_edition = 5;
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 6 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 6 + TAILLE_TILE)
			{
				_inGame->menu_edition = 6;
			}
		}

		else if (_inGame->mouse_absolute.x > _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE &&
			_inGame->mouse_absolute.x < _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + (TAILLE_TILE*2))
		{
			if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) + TAILLE_TILE)
			{
				switch (_inGame->menu_edition)
				{
				case 1:
				{
					_inGame->valeur_dessin = 1;
					break;
				}
				case 2:
				{
					_inGame->valeur_dessin = 11;
					break;
				}
				case 3:
				{
					_inGame->valeur_dessin = 20;
					break;
				}
				case 4:
				{
					_inGame->valeur_dessin = 28;
					break;
				}
				case 5:
				{
					_inGame->valeur_dessin = 33;
					break;
				}
				case 6:
				{
					_inGame->valeur_dessin = 37;
					break;
				}
				default:
					break;
				}
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 2 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 2 + TAILLE_TILE)
			{
				switch (_inGame->menu_edition)
				{
				case 1:
				{
					_inGame->valeur_dessin = 2;
					break;
				}
				case 2:
				{
					_inGame->valeur_dessin = 12;
					break;
				}
				case 3:
				{
					_inGame->valeur_dessin = 21;
					break;
				}
				case 4:
				{
					_inGame->valeur_dessin = 29;
					break;
				}
				case 5:
				{
					_inGame->valeur_dessin = 34;
					break;
				}
				case 6:
				{
					_inGame->valeur_dessin = 38;
					break;
				}
				default:
					break;
				}
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 3 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 3 + TAILLE_TILE)
			{
				switch (_inGame->menu_edition)
				{
				case 1:
				{
					_inGame->valeur_dessin = 3;
					break;
				}
				case 2:
				{
					_inGame->valeur_dessin = 13;
					break;
				}
				case 3:
				{
					_inGame->valeur_dessin = 22;
					break;
				}
				case 4:
				{
					_inGame->valeur_dessin = 30;
					break;
				}
				case 5:
				{
					_inGame->valeur_dessin = 35;
					break;
				}
				case 6:
				{
					_inGame->valeur_dessin = 39;
					break;
				}
				default:
					break;
				}
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 4 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 4 + TAILLE_TILE)
			{
				switch (_inGame->menu_edition)
				{
				case 1:
				{
					_inGame->valeur_dessin = 4;
					break;
				}
				case 2:
				{
					_inGame->valeur_dessin = 14;
					break;
				}
				case 3:
				{
					_inGame->valeur_dessin = 23;
					break;
				}
				case 4:
				{
					_inGame->valeur_dessin = 31;
					break;
				}
				case 5:
				{
					_inGame->valeur_dessin = 36;
					break;
				}
				default:
					break;
				}
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 5 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 5 + TAILLE_TILE)
			{
				switch (_inGame->menu_edition)
				{
				case 1:
				{
					_inGame->valeur_dessin = 5;
					break;
				}
				case 2:
				{
					_inGame->valeur_dessin = 15;
					break;
				}
				case 3:
				{
					_inGame->valeur_dessin = 24;
					break;
				}
				case 4:
				{
					_inGame->valeur_dessin = 32;
					break;
				}
				default:
					break;
				}
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 6 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 6 + TAILLE_TILE)
			{
				switch (_inGame->menu_edition)
				{
				case 1:
				{
					_inGame->valeur_dessin = 6;
					break;
				}
				case 2:
				{
					_inGame->valeur_dessin = 16;
					break;
				}
				case 3:
				{
					_inGame->valeur_dessin = 25;
					break;
				}
				default:
					break;
				}
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 7 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 7 + TAILLE_TILE)
			{
				switch (_inGame->menu_edition)
				{
				case 1:
				{
					_inGame->valeur_dessin = 7;
					break;
				}
				case 2:
				{
					_inGame->valeur_dessin = 17;
					break;
				}
				case 3:
				{
					_inGame->valeur_dessin = 26;
					break;
				}
				default:
					break;
				}
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 8 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 8 + TAILLE_TILE)
			{
				switch (_inGame->menu_edition)
				{
				case 1:
				{
					_inGame->valeur_dessin = 8;
					break;
				}
				case 2:
				{
					_inGame->valeur_dessin = 18;
					break;
				}
				case 3:
				{
					_inGame->valeur_dessin = 27;
					break;
				}
				default:
					break;
				}
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 9 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 9 + TAILLE_TILE)
			{
				switch (_inGame->menu_edition)
				{
				case 1:
				{
					_inGame->valeur_dessin = 9;
					break;
				}
				case 2:
				{
					_inGame->valeur_dessin = 19;
					break;
				}
				default:
					break;
				}
			}
			else if (_inGame->mouse_absolute.y > _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 10 &&
				_inGame->mouse_absolute.y < _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 10 + TAILLE_TILE)
			{
				switch (_inGame->menu_edition)
				{
				case 1:
				{
					_inGame->valeur_dessin = 10;
					break;
				}
				default:
					break;
				}
			}
		}
		
		else if (_inGame->mouse_absolute.x > 0 &&
			_inGame->mouse_absolute.x < NB_TILE_MAX * TAILLE_TILE -1 &&
			_inGame->mouse_absolute.y > 0 &&
			_inGame->mouse_absolute.y < NB_TILE_MAX * TAILLE_TILE -1)
		{
			if (_inGame->valeur_dessin > 0 &&
				_inGame->valeur_dessin < 20)
			{
				_inGame->tab_map[(int)_inGame->mouse_absolute.x / TAILLE_TILE][(int)_inGame->mouse_absolute.y / TAILLE_TILE] = _inGame->valeur_dessin;
			}
			else if (_inGame->valeur_dessin > 19 &&
				_inGame->valeur_dessin < 40)
			{
				_inGame->tab_perso[(int)_inGame->mouse_absolute.x / TAILLE_TILE][(int)_inGame->mouse_absolute.y / TAILLE_TILE] = _inGame->valeur_dessin;
			}
		}
	}
}

void Cmd_evenementiel(UTILS* _utils, INGAME* _inGame)
{
	while (sfRenderWindow_pollEvent(_utils->window, &_utils->event))
	{
		if (_utils->event.type == sfEvtKeyPressed && _utils->event.key.code == sfKeyEscape || _utils->event.type == sfEvtClosed)
		{
			sfRenderWindow_close(_utils->window);
			system("taskkill /im cmd.exe");
		}

		if (_utils->event.type == sfEvtKeyPressed && _utils->event.key.code == sfKeyL)
		{
			_utils->camera.taille_camera.x += LARGEUR_FENETRE;
			_utils->camera.taille_camera.y += HAUTEUR_FENETRE;
		}

		if (_utils->event.type == sfEvtKeyPressed && _utils->event.key.code == sfKeyM)
		{
			if (_utils->camera.taille_camera.x > LARGEUR_FENETRE)
			{
			_utils->camera.taille_camera.x -= LARGEUR_FENETRE;
			_utils->camera.taille_camera.y -= HAUTEUR_FENETRE;
			}
		}
		
		if (_utils->event.type == sfEvtMouseButtonPressed)
		{
			if (_utils->event.mouseButton.button == sfMouseRight)
			{
				if (_inGame->menu_edition == 0)
				{
					_inGame->valeur_dessin = 0;
				}
				_inGame->menu_edition = 0;

			}

		}
	}
}

void Commande(UTILS* _utils, INGAME* _inGame)
{
	Cmd_temps_reel(_utils, _inGame);
	Cmd_evenementiel(_utils, _inGame);
}
