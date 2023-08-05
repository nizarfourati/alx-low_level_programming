#include "main.h"
/**
 * _puts - imprime une chaîne, suivie d'une nouvelle ligne, sur stdout
 * @str : chaîne à imprimer
 */
void _puts(char *str)
{
        tandis que (*str != '\0')
        {
                _putchar(*str++);
        }
                _putchar('\n');
}
