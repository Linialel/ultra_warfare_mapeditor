#include "stdafx.h"

void Initialisation(UTILS* _utils, INGAME* _inGame)
{
	char* nom = calloc(60, sizeof(char));

	sprintf(nom, "image/front.png");
	_inGame->sprite.front = LoadSprite(nom, 0);

	sprintf(nom, "image/back.png");
	_inGame->sprite.back = LoadSprite(nom, 0);

	sprintf(nom, "image/left.png");
	_inGame->sprite.left = LoadSprite(nom, 0);

	sprintf(nom, "image/right.png");
	_inGame->sprite.right = LoadSprite(nom, 0);


	sprintf(nom, "image/arrow.png");
	_inGame->sprite.arrow = LoadSprite(nom, 1);

	sprintf(nom, "image/map.png");
	_inGame->sprite.map = LoadSprite(nom, 0);

	sprintf(nom, "image/minimap.png");
	_inGame->sprite.minimap = LoadSprite(nom, 0);

	////////////////////////////

	sprintf(nom, "image/tileset/type_tile/carte.png");
	_inGame->sprite.carte = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/type_tile/batiment.png");
	_inGame->sprite.batiment = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/type_tile/infanterie.png");
	_inGame->sprite.infanterie = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/type_tile/vehicule.png");
	_inGame->sprite.vehicule = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/type_tile/unite_aerienne.png");
	_inGame->sprite.unite_aerienne = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/type_tile/unite_navale.png");
	_inGame->sprite.unite_navale = LoadSprite(nom, 0);

	///////////////////////////////

	sprintf(nom, "image/tileset/map/map_black.png");
	_inGame->sprite.map_black = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/map/map_blue.png");
	_inGame->sprite.map_blue = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/map/map_brown.png");
	_inGame->sprite.map_brown = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/map/map_green.png");
	_inGame->sprite.map_green = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/map/map_green.png");
	_inGame->sprite.map_green = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/map/map_orange.png");
	_inGame->sprite.map_orange = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/map/map_pink.png");
	_inGame->sprite.map_pink = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/map/map_purple.png");
	_inGame->sprite.map_purple = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/map/map_red.png");
	_inGame->sprite.map_red = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/map/map_white.png");
	_inGame->sprite.map_white = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/map/map_yellow.png");
	_inGame->sprite.map_yellow = LoadSprite(nom, 0);

	//////////////////////////////////

	sprintf(nom, "image/tileset/batiments/aeroport.png");
	_inGame->sprite.aeroport = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/batiments/bouclier.png");
	_inGame->sprite.bouclier = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/batiments/caserne.png");
	_inGame->sprite.caserne = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/batiments/mur.png");
	_inGame->sprite.mur = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/batiments/port.png");
	_inGame->sprite.port = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/batiments/qg.png");
	_inGame->sprite.qg = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/batiments/revenu.png");
	_inGame->sprite.revenu = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/batiments/tour_de_defense.png");
	_inGame->sprite.tour = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/batiments/usine_de_vehicule.png");
	_inGame->sprite.usine_vehicule = LoadSprite(nom, 0);

	//////////////////////////////////

	sprintf(nom, "image/tileset/infanterie/infanterie_assassin.png");
	_inGame->sprite.infanterie_assassin = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/infanterie/infanterie_bazooka.png");
	_inGame->sprite.infanterie_bazoka = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/infanterie/infanterie_commando.png");
	_inGame->sprite.infanterie_commando = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/infanterie/infanterie_dca.png");
	_inGame->sprite.infanterie_dca = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/infanterie/infanterie_iem.png");
	_inGame->sprite.infanterie_iem = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/infanterie/infanterie_rusher.png");
	_inGame->sprite.infanterie_rusher = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/infanterie/infanterie_sniper.png");
	_inGame->sprite.infanterie_sniper = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/infanterie/infanterie_soldat.png");
	_inGame->sprite.infanterie_soldat = LoadSprite(nom, 0);

	//////////////////////////////////////

	sprintf(nom, "image/tileset/vehicule/vehicule_bouclier.png");
	_inGame->sprite.vehicule_bouclier = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/vehicule/vehicule_constructeur.png");
	_inGame->sprite.vehicule_constructeur = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/vehicule/vehicule_eclaireur.png");
	_inGame->sprite.vehicule_eclaireur = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/vehicule/vehicule_tank.png");
	_inGame->sprite.vehicule_tank = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/vehicule/vehicule_transport.png");
	_inGame->sprite.vehicule_transport = LoadSprite(nom, 0);

	/////////////////////////////////////

	sprintf(nom, "image/tileset/aerien/aerien_bombardier.png");
	_inGame->sprite.aerien_bombardier = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/aerien/aerien_chasseur.png");
	_inGame->sprite.aerien_chasseur = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/aerien/aerien_helico.png");
	_inGame->sprite.aerien_helico = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/aerien/aerien_transport.png");
	_inGame->sprite.aerien_transport = LoadSprite(nom, 0);

	////////////////////////////////////////

	sprintf(nom, "image/tileset/navale/navale_cuirasse.png");
	_inGame->sprite.navale_cuirasse = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/navale/navale_sousmarin.png");
	_inGame->sprite.navale_sousmarin = LoadSprite(nom, 0);

	sprintf(nom, "image/tileset/navale/navale_transport.png");
	_inGame->sprite.navale_transport = LoadSprite(nom, 0);

	sprintf(nom, "image/contour_curseur.png");
	_inGame->sprite.curseur = LoadSprite(nom, 0);

	free(nom);

	_utils->camera.camera_minimap = sfView_copy(_utils->camera.camera);
	_utils->camera.cameraj2 = sfView_copy(_utils->camera.camera);

	_inGame->tab_map = calloc(NB_TILE_MAX, sizeof(int*));
	_inGame->tab_perso = calloc(NB_TILE_MAX, sizeof(int*));
	for (int i = 0; i < NB_TILE_MAX; i++)
	{
		_inGame->tab_map[i] = calloc(NB_TILE_MAX, sizeof(int));
		_inGame->tab_perso[i] = calloc(NB_TILE_MAX, sizeof(int));
	}

	_utils->camera.taille_camera.x = LARGEUR_FENETRE;
	_utils->camera.taille_camera.y = HAUTEUR_FENETRE;
}

sfSprite* LoadSprite(char* _sNom, int _isCentered)
{
	sfSprite* sprite;
	sfTexture* texture;

	texture = sfTexture_createFromFile(_sNom, NULL);
	sprite = sfSprite_create();
	sfSprite_setTexture(sprite, texture, sfTrue);

	if (_isCentered != 0)
	{
		sfVector2u tempsize = sfTexture_getSize(texture);
		sfVector2f origin = { (float)tempsize.x / 2 ,(float)tempsize.y / 2 };
		sfSprite_setOrigin(sprite, origin);
	}

	return sprite;
}

sfSound* LoadSound(char* _sNom)
{
	sfSound* son;
	sfSoundBuffer* buffer;

	buffer = sfSoundBuffer_createFromFile(_sNom);
	son = sfSound_create();
	sfSound_setBuffer(son, buffer);

	return son;
}

sfMusic* LoadMusic(char* _sNom)
{
	sfMusic* music;

	music = sfMusic_createFromFile(_sNom);

	return music;
}

sfText* LoadText(char* _sNom)
{
	sfFont* font;
	sfText* texte;

	font = sfFont_createFromFile(_sNom);
	texte = sfText_create();
	sfText_setFont(texte, font);

	return texte;
}