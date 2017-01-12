#include "stdafx.h"

void Affichage_editeur(UTILS* _utils, INGAME* _inGame)
{
	Afficher_sprite(_utils, _inGame->sprite.carte, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE+ 5) }, (sfVector2f) { 1, 1 }, 0);
	Afficher_sprite(_utils, _inGame->sprite.batiment, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 2 }, (sfVector2f) { 1, 1 }, 0);
	Afficher_sprite(_utils, _inGame->sprite.infanterie, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 3 }, (sfVector2f) { 1, 1 }, 0);
	Afficher_sprite(_utils, _inGame->sprite.vehicule, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 4 }, (sfVector2f) { 1, 1 }, 0);
	Afficher_sprite(_utils, _inGame->sprite.unite_aerienne, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 5 }, (sfVector2f) { 1, 1 }, 0);
	Afficher_sprite(_utils, _inGame->sprite.unite_navale, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 6 }, (sfVector2f) { 1, 1 }, 0);

	switch (_inGame->menu_edition)
	{
	case 1:
	{
		Afficher_sprite(_utils, _inGame->sprite.map_white, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.map_yellow, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 2 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.map_red, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 3 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.map_purple, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 4 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.map_pink, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 5 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.map_orange, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 6 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.map_green, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 7 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.map_brown, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 8 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.map_blue, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 9 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.map_black, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 10 }, (sfVector2f) { 1, 1 }, 0);
		break;
	}
	case 2:
	{
		Afficher_sprite(_utils, _inGame->sprite.qg, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5)}, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.caserne, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 2 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.usine_vehicule, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 3 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.aeroport, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 4 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.port, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 5 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.mur, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 6 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.tour, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 7 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.bouclier, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 8 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.revenu, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 9 }, (sfVector2f) { 1, 1 }, 0);
		break;
	}
	case 3:
	{
		Afficher_sprite(_utils, _inGame->sprite.infanterie_soldat, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.infanterie_bazoka, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 2 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.infanterie_rusher, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 3 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.infanterie_sniper, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 4 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.infanterie_assassin, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 5 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.infanterie_commando, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 6 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.infanterie_dca, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 7 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.infanterie_iem, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 8 }, (sfVector2f) { 1, 1 }, 0);

		break;
	}
	case 4:
	{
		Afficher_sprite(_utils, _inGame->sprite.vehicule_transport, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5)}, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.vehicule_constructeur, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 2 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.vehicule_eclaireur, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 3 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.vehicule_tank, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 4 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.vehicule_bouclier, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 5 }, (sfVector2f) { 1, 1 }, 0);

		break;
	}
	case 5:
	{
		Afficher_sprite(_utils, _inGame->sprite.aerien_transport, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.aerien_helico, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 2 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.aerien_bombardier, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 3 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.aerien_chasseur, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 4 }, (sfVector2f) { 1, 1 }, 0);

		break;
	}
	case 6:
	{
		Afficher_sprite(_utils, _inGame->sprite.navale_transport, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.navale_cuirasse, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 2 }, (sfVector2f) { 1, 1 }, 0);
		Afficher_sprite(_utils, _inGame->sprite.navale_sousmarin, (sfVector2f) { _inGame->entite[HEROS].position.x - LARGEUR_FENETRE / 2 + TAILLE_TILE, _inGame->entite[HEROS].position.y - HAUTEUR_FENETRE / 2 + (TAILLE_TILE + 5) * 3 }, (sfVector2f) { 1, 1 }, 0);

		break;
	}
	default:
		break;
	}




}