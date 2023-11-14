#include "main.h"

/**
 * _print_binary - prints a number in binary notation
 * @n: number to print
 * Return: number of digits printed
 */
int _print_binary(unsigned int n)
{
    int count = 0;

    if (n / 2)
    {
        count += _print_binary(n / 2);
    }
    _putchar(n % 2 + '0');
    count++;
    return (count);
}