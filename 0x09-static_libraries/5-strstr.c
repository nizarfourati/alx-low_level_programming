#include "main.h"
/**
 * _strstr - Point d'entrée
 * @haystack : entrée
 * @aiguille : entrée
 * Retour : Toujours 0 (Succès)
 */
char *_strstr(char *botte de foin, char *aiguille)
{
        for (; *meule de foin != '\0'; meule de foin++)
        {
                char *l = botte de foin ;
                caractère *p = aiguille ;
                tandis que (*l == *p && *p != '\0')
                {
                        l++ ;
                        p++;
                }
                si (*p == '\0')
                        retour (meule de foin);
        }
        retour (0);
}
