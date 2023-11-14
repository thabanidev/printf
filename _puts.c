#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 * Return: number of characters printed
 * (returns -1 if error)
 */
int _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    return (i);
}