#include "main.h"
/**
 * _strlen - renvoie la longueur d'une chaîne
 * @s : chaîne
 * Retour : longueur
 */
entier _strlen(car *s)
{
        entier longi = 0 ;
        tandis que (*s != '\0')
        {
                longi++ ;
                s++ ;
        }
        retour (longi);
}
