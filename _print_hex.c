#include "main.h"

/**
 * _print_hex - prints a number in hexadecimal notation
 * @n: number to print
 * @uppercase: flag to indicate if letters should be capitalized
 * Return: number of digits printed
 */
int _print_hex(unsigned int n, int uppercase)
{
    int count = 0;
    char *hex;

    if (uppercase)
    {
        hex = "0123456789ABCDEF";
    }
    else
    {
        hex = "0123456789abcdef";
    }
    if (n / 16)
    {
        count += _print_hex(n / 16, uppercase);
    }
    _putchar(hex[n % 16]);
    count++;
    return (count);
}