#include "main.h"
/**
 * _strncpy - copie une chaîne
 * @dest : valeur d'entrée
 * @src : valeur d'entrée
 * @n : valeur d'entrée
 *
 * Retour : destination
 */
char *_strncpy(char *dest, char *src, int n)
{
        entier j ;
        j = 0 ;
        tandis que (j < n && src[j] != '\0')
        {
                destination[j] = source[j] ;
                j++;
        }
        tandis que (j < n)
        {
                destination[j] = '\0' ;
                j++;
        }
        retour (dest);
}
