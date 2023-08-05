#include "main.h"
/**
 * _isalpha - vérifie le caractère alphabétique
 * @c : le caractère à vérifier
 * Retour : 1 si c est une lettre, 0 sinon
 */
entier _isalpha(entier c)
{
        return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
