#include "main.h"
/**
 * _atoi - convertit une chaîne en entier.
 *
 * @s : la chaîne à utiliser.
 *
 * Retour : entier.
 */
int _atoi(char *s)
{
        signe entier = 1, je = 0 ;
        entier non signé res = 0 ;
        tandis que (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
        {
                si (s[i] == '-')
                        signe *= -1 ;
                je++ ;
        }
        tandis que (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
        {
                res = (res * 10) + (s[i] - '0');
                je++ ;
        }
        res *= signe ;
        retour (res);
}
