#include "main.h"
/**
 * _strncat - concaténer deux chaînes
 * en utilisant au plus n octets de src
 * @dest : valeur d'entrée
 * @src : valeur d'entrée
 * @n : valeur d'entrée
 *
 * Retour : destination
 */
char *_strncat(char *dest, char *src, int n)
{
        int je ;
        entier j ;
        je = 0 ;
        tandis que (dest[i] != '\0')
        {
                je++ ;
        }
 j = 0 ;
        tandis que (j < n && src[j] != '\0')
        {
        destination[i] = src[j] ;
        je++ ;
        j++;
        }
        destination[i] = '\0' ;
        retour (dest);
}
