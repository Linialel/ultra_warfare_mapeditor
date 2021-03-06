#pragma once

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
////		Affichage
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////
///n
///Boucle d'affichage
///n
///Mettre toutes les fonctions d'affichage l� dedans
//////////////////////////////////////////////////
void Affichage(UTILS* _utils, INGAME* _inGame);

void Affichage_editeur(UTILS* _utils, INGAME* _inGame);

//////////////////////////////////////////////////
///n
///Permet l'affichage d'un sprite
///n
///_utils = structure utilitaire n�cessaire
///_sprite = sprite � afficher
///_position = vecteur de position a donner au sprite
///_scale = vecteur du facteur de redimensionnement de l'image
///n
///(1,1) = taille r�elle
///(-1,1) = invertion sur l'axe des x
///(2,2) = image deux fois plus grande
/// n
///_rotation = d�finit la rotation de l'image dans le sens horaire
//////////////////////////////////////////////////
void Afficher_sprite(UTILS* _utils, sfSprite* _sprite, sfVector2f _position, sfVector2f _scale, float _rotation);