#pragma once

//////////////////////////////////////////////////
//////////////////////////////////////////////////
////		Fichier							  ////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
///Ouverture Fermeture
/*
//////////////////////////////////////////////////
///fopen pour ouvrir un fichier

FILE* fopen (const char* Fichier, const char* ModeOuverture);
		 avec :
le pointeur FILE* qui va contenir l'adresse du fichier
const char* Fichier l'adresse où se situe le fichier
				ex :  "fichier/init.txt"
const char* ModeOuverture \\voir ci-dessous

//////////////////////////////////////////////////

//////////////////////////////////////////////////
/// les différents modes d'ouverture

1 = "r" = lecture seule d'un fichier deja existant
2 = "r+" = lecture et écriture d'un fichier deja existant
3 = "w" = ecriture seule avec (re)création du fichier
4 = "w+" = lecture/ecriture avec (re)création du fichier
5 = "a" = ecriture seule à la fin d'un fichier, le crée si il n'existe pas
6 = "a+" = lecture/ecriture à partir de la fin d'un fichier, le crée si il n'existe pas
7 = "rb" = "r" pour fichier binaire
8 = "rb+" = "r+" pour fichier binaire
9 = "wb" = "w" pour fichier binaire
10 = "wb+" = "w+" pour fichier binaire
11 = "ab" = "a" pour fichier binaire
12 = "ab+" = "a+" pour fichier binaire

//////////////////////////////////////////////////

//////////////////////////////////////////////////
/// tester la bonne ouverture du fichier

if (fichier != NULL)
{
	//opération à faire dans le fichier
}

//////////////////////////////////////////////////

//////////////////////////////////////////////////
/// fermeture du fichier

int fclose(FILE* file);
		avec :
int valeur renvoyé par la fonction :
	0 si la fermeture est réussi
	EOF si elle à échoué
FILE* file le pointeur contenant l'adresse du fichier

//////////////////////////////////////////////////
*/

///Fichier texte
/*
//////////////////////////////////////////////////
/// ecriture dans un fichier texte

		fputc : caractere par caractere
int fputc(int caractere, FILE* file);
avec :
int valeur renvoyé par la fonction :
	EOF si l'ecriture à échoué
int caractere le symbole a ecrire (0, 8, 'A', '\', ...)
FILE* file le pointeur contenant l'adresse du fichier

		fputs : chaine
char* fputs(const char* chaine, FILE* file);
avec :
char* valeur renvoyé par la fonction :
	EOF si l'ecriture à échoué
const char* chaine la chaine a ecrire ("printf yolo!!\nNan en vrai, \t YOLOOOOO!")
FILE* file le pointeur contenant l'adresse du fichier

		fprintf : chaine formatee
int fprintf(FILE *file, const char *format, variable);
avec :
int valeur renvoyé par la fonction :
	EOF si l'ecriture à échoué
FILE* file le pointeur contenant l'adresse du fichier
const char* format la chaine formatee a ecrire ("dans mon sac j'ai %d bonbon")
variable la liste des variables demandées dans la chaine formatée (sucrerie)

//////////////////////////////////////////////////

//////////////////////////////////////////////////
/// lecture d'un fichier texte

		fgetc : caractere par caractere
int fgetc(FILE* file);
avec :
int valeur renvoyé par la fonction :
	si la lecture à échoué EOF
	sinon retourne le caractere lu
FILE* file le pointeur contenant l'adresse du fichier

	ex lecture fichier entier:
int caractere_actuel = 0;
while (caractere_actuel != EOF)
{
	caractere_actuel = fgetc(file);
	printf("%c", caractere_actuel );
}

		fgets : chaine
char* fgets(char* chaine, int NbCaractere, FILE* file);
avec :
char* valeur renvoyé par la fonction :
	si la lecture à échoué NULL
char* chaine tableau dans lequel va etre ecrit la chaine
	/!\ s'arrete au premier "\n" rencontré /!\
int NbCaractere nombre maximal de caractere a lire, par défaut mettre la taille du tableau
FILE* file le pointeur contenant l'adresse du fichier

	ex lecture fichier entier:
char chaine[100] = {0};
while (fgets(chaine, 100, file) != NULL)
{
	printf("s", chaine);
}

	fscanf : chaine formatée
/!\ On doit connaitre PRECISEMENT l'ordre d'ecriture du fichier pour pouvoir utiliser fscanf
int fscanf(FILE* file, const char *format, &variable)
avec :
int valeur renvoyé par la fonction :
	si la lecture à échoué NULL
FILE* file le pointeur contenant l'adresse du fichier
const char* format chaine formatée a lire
&variable l'adresse de(s) variable(s) qui vont récupérer les valeurs

	ex lecture
int a = 0, b = 0, c = 0;
fscanf(file, "%d %d %d", &a, &b, &c);

//////////////////////////////////////////////////
*/

///Fichier binaire
/*
//////////////////////////////////////////////////
/// ecriture dans un fichier binaire

size_t fwrite (const void *pointeur, size_t size, size_t nmemb, FILE *file);
avec :
const void *pointeur vers la variable à écrire
size_t size sizeof(pointeur)
size_t nmemb le nombre de caractere ayant une taille size a ecrire
FILE *file le pointeur contenant l'adresse du fichier

ex :
int var[5] = {15, 30, 4, 12, 42};

fwrite( &var , sizeof(int) , 5 , fichier);
//////////////////////////////////////////////////

//////////////////////////////////////////////////
/// lecture dans un fichier binaire

size_t fread (const void *ptr, size_t size, size_t nmemb, FILE *stream);
avec :
const void *pointeur vers la variable qui recevra la lecture
size_t size sizeof(pointeur)
size_t nmemb le nombre de caractere ayant une taille size a lire
FILE *file le pointeur contenant l'adresse du fichier

//////////////////////////////////////////////////

*/

///Déplacement
/*
//////////////////////////////////////////////////
/// se déplacer dans un fichier

fseek : positionne à une place précise
int fseek(FILE* file, long deplacement, int origine);
avec :
int valeur renvoyé par la fonction
0 si le déplacement est réussi
sinon un code d'erreur
FILE* file le pointeur contenant l'adresse du fichier
long deplacement le nombre de caractere dont on demande de se déplacer
-X pour revenir de X caractere
X pour sauter X caractere
int origine l'origine du déplacement
SEEK_SET = début
SEEK_CUR = actuel
SEEK_END = fin

rewind : réinitialise le pointeur au début du fichier
void rewind(FILE* file);
avec :
FILE* file le pointeur contenant l'adresse du fichier

ftell : renvoie la position du pointeur dans le fichier
long ftell(FILE* file);
avec :
long position dans le fihcier
FILE* file le pointeur contenant l'adresse du fichier
//////////////////////////////////////////////////
*/

///Rennomer
/*
//////////////////////////////////////////////////
///Rennomer un fichier

int rename(const char* ancienNom, const char* nouveauNom);
avec :
int valeur renvoyé par la fonction :
	0 si elle a réussi
	sinon un code d'erreur
const char* ancienNom le nom du fichier a changer
const char* nouveauNom le nouveau nom du fichier

//////////////////////////////////////////////////
*/

///Supprimer
/*
//////////////////////////////////////////////////
///Supprimer un fichier

int remove(const char* NomFichier);
int valeur renvoyé par la fonction :
	0 si elle a réussi
	sinon un code d'erreur
const char* NomFichier le nom du fichier a supprimer

//////////////////////////////////////////////////
*/