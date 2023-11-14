#include "main.h"

/**
 * _print_number - prints an integer
 * @n: integer to be printed
 * Return: number of digits printed
 */
int _print_number(int n)
{
    unsigned int m;
    int count = 0;

    if (n < 0)
    {
        _putchar('-');
        m = -n;
        count++;
    }
    else
    {
        m = n;
    }
    if (m / 10)
    {
        count += _print_number(m / 10);
    }
    _putchar(m % 10 + '0');
    count++;
    return (count);
}