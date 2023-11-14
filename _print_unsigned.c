#include "main.h"

/**
 * _print_unsigned - prints an unsigned integer
 * @n: unsigned integer to be printed
 * Return: number of digits printed
 */
int _print_unsigned(unsigned int n)
{
    unsigned int m;
    int count = 0;

    m = n;
    if (m / 10)
    {
        count += _print_unsigned(m / 10);
    }
    _putchar(m % 10 + '0');
    count++;
    return (count);
}