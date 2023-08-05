#include "main.h"
/**
 * _strspn - Point d'entrée
 * @s : entrée
 * @accept : saisie
 * Retour : Toujours 0 (Succès)
 */
entier non signé _strspn (car * s, car * accepter)
{
        entier non signé n = 0 ;
        int r;
        tandis que (*s)
        {
                pour (r = 0; accepter[r]; r++)
                {
                        si (*s == accepter[r])
                        {
                                n++ ;
                                casser;
                        }
                        sinon si (accepte[r + 1] == '\0')
                                retour (n);
                }
                s++ ;
        }
        retour (n);
}
