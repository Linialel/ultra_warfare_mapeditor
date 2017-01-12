#pragma once

#define LARGEUR_FENETRE 1920 
#define HAUTEUR_FENETRE 1080
#define LARGEUR_DECOR 7000 
#define HAUTEUR_DECOR 3939
#define BITS_PIXEL 32 ///Définit la profondeur en pixel en image en théorie, en pratique ne pas toucher
#define FPS 60 ///limite maximale du nombre de fps, il ne peut pas y en avoir plus, mais il peut y en avoir moins

#define COEF_MINIMAP 3.645833

#define MENU 0
#define ENJEU 1
#define VICTOIRE 2
#define DEFAITE 3

#define HEROS 0

#define HAUT 2
#define BAS 0
#define GAUCHE 1
#define DROITE 3

#define POSITION_MINIMAP_X (0.5 - (1.0/8.0)/2)
#define POSITION_MINIMAP_Y (0.0)
#define TAILLE_MINIMAP (1.0/8.0)

#define VIEWPORT_FULLSCREEN_ORIGINE (0.0)
#define VIEWPORT_FULLSCREEN_POSITION (1.0)

#define VIEWPORT_SPLITSCREEN_POSITION (0.5)

#define NB_TILE_MAX 30 //définit la taille maximale de la zone de jeu
#define TAILLE_TILE 128 // la taille d'une tile ex : 64x/64y

#define NB_TYPE 6 //type différent de tile
#define NB_MAP 10 //nombre de tile pour la map
#define NB_BATIMENT 9
#define NB_INFANTERIE 8
#define NB_VEHICULE 5
#define NB_AERIEN 4
#define NB_NAVALE 3

#define OSEF_NOMBRE_TOTAL 39 //Sert a rien sauf pour savoir combien il y a de tile différents, les tile TYPE ne compte pas


typedef struct SPRITEPACK
{
	sfSprite* front;
	sfSprite* back;
	sfSprite* left;
	sfSprite* right;

	sfSprite* map;
	sfSprite* minimap;
	sfSprite* arrow;
	sfSprite* curseur;

	sfSprite* carte;
	sfSprite* batiment;
	sfSprite* infanterie;
	sfSprite* vehicule;
	sfSprite* unite_aerienne;
	sfSprite* unite_navale;

	sfSprite* map_white;
	sfSprite* map_yellow;
	sfSprite* map_red;
	sfSprite* map_purple;
	sfSprite* map_pink;
	sfSprite* map_orange;
	sfSprite* map_green;
	sfSprite* map_brown;
	sfSprite* map_blue;
	sfSprite* map_black;

	sfSprite* qg;
	sfSprite* caserne;
	sfSprite* usine_vehicule;
	sfSprite* aeroport;
	sfSprite* port;
	sfSprite* mur;
	sfSprite* tour;
	sfSprite* bouclier;
	sfSprite* revenu;

	sfSprite* infanterie_soldat;
	sfSprite* infanterie_bazoka;
	sfSprite* infanterie_rusher;
	sfSprite* infanterie_sniper;
	sfSprite* infanterie_assassin;
	sfSprite* infanterie_commando;
	sfSprite* infanterie_dca;
	sfSprite* infanterie_iem;

	sfSprite* vehicule_transport;
	sfSprite* vehicule_constructeur;
	sfSprite* vehicule_eclaireur;
	sfSprite* vehicule_tank;
	sfSprite* vehicule_bouclier;

	sfSprite* aerien_transport;
	sfSprite* aerien_helico;
	sfSprite* aerien_bombardier;
	sfSprite* aerien_chasseur;

	sfSprite* navale_transport;
	sfSprite* navale_cuirasse;
	sfSprite* navale_sousmarin;
}SPRITEPACK;

typedef struct SON
{
	sfSound* son;
	sfMusic* musique;
}SON;

typedef struct TEXTE
{
	sfText* texte;
}TEXTE;

typedef struct POINT_FICH
{
	FILE* init;
	FILE* high_score;
	FILE* save;
}POINT_FICH;

typedef struct ENTITE
{
	sfVector2f vitesse;
	sfVector2f position;
	int direction;
}ENTITE;

typedef struct CAMERA
{
	sfView* camera;
	sfView* cameraj2;
	sfView* camera_minimap;
	int bool_camera;
	int bool_split;
	float rotation_arrow;
	sfVector2f taille_camera;
}CAMERA;

typedef struct UNITE UNITE;
struct UNITE
{
	UNITE* suivant;
	int appartenance; //joueur 1/ 2 etc...
	int pdv;
	int attaque; //degat
	int defense; //resistance
	int portee; //a quelle distance il peut attaquer
	int deplacement; //de combien il peut se déplacer
	sfVector2f position; //par rapport au tableau de jeu 
};

typedef struct LISTE
{
	UNITE* premier;
	int compteur; //le nombre d'element de type UNITE
}LISTE;

typedef struct INGAME
{
	SPRITEPACK sprite;
	SON son;
	TEXTE texte;
	LISTE liste;
	ENTITE entite[1];
	sfVector2f mouse_relative;
	sfVector2f mouse_absolute;
	int** tab_map;
	int** tab_perso;
	int menu_edition;
	int valeur_dessin; //la case recuperer pour le dessin
}INGAME;

typedef struct UTILS
{
	sfVideoMode mode;
	sfRenderWindow* window;
	sfEvent event;
	sfClock* horloge;
	sfTime time;
	CAMERA camera;
	POINT_FICH pointeur_fichier;
	float fDeltatime;
	char cEtat; // 0 Menu /1 en jeu /2 Victoire /3 Defaite
}UTILS;
