#include "main.h"
/**
 * _strpbrk - Point d'entrée
 * @s : entrée
 * @accept : saisie
 * Retour : Toujours 0 (Succès)
 */
char *_strpbrk(char *s, char *accepter)
{
        entier k ;
        tandis que (*s)
        {
                pour (k = 0; accepter[k]; k++)
                {
                si (*s == accepter[k])
                Retour);
                }
        s++ ;
        }
retour ('\0');
}
