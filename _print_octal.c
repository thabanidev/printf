#include "main.h"

/**
 * _print_octal - prints a number in octal notation
 * @n: number to print
 * Return: number of digits printed
 */
int _print_octal(unsigned int n)
{
    int count = 0;

    if (n / 8)
    {
        count += _print_octal(n / 8);
    }
    _putchar(n % 8 + '0');
    count++;
    return (count);
}