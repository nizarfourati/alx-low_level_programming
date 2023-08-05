#include "main.h"
/**
 * char *_strcpy - une fonction qui copie la chaîne pointée par src
 * @dest : copier vers
 * @src : copie de
 * Retour : chaîne
 */
char *_strcpy(char *dest, char *src)
{
        entier l = 0 ;
        int x = 0 ;
        tandis que (*(src + l) != '\0')
        {
                l++ ;
        }
        pour ( ; x < l ; x++)
        {
                destination[x] = source[x] ;
        }
        destination[l] = '\0' ;
        retour (dest);
}
