#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints a formatted string to stdout
 * @format: string to be printed with optional format specifiers
 * Return: number of characters printed excluding null byte
 * (returns -1 if error)
 */
int _printf(const char *format, ...)
{
    int i = 0;
    int count = 0;
    va_list args;

    va_start(args, format);
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
            {
                count += _putchar(va_arg(args, int));
            }
            else if (format[i] == 's')
            {
                count += _puts(va_arg(args, char *));
            }
            else if (format[i] == 'd' || format[i] == 'i')
            {
                count += _print_number(va_arg(args, int));
            }
            else if (format[i] == 'b')
            {
                count += _print_binary(va_arg(args, unsigned int));
            }
            else if (format[i] == 'u')
            {
                count += _print_unsigned(va_arg(args, unsigned int));
            }
            else if (format[i] == 'o')
            {
                count += _print_octal(va_arg(args, unsigned int));
            }
            else if (format[i] == 'x')
            {
                count += _print_hex(va_arg(args, unsigned int), 0);
            }
            else if (format[i] == 'X')
            {
                count += _print_hex(va_arg(args, unsigned int), 1);
            }
            else if (format[i] == '%')
            {
                count += _putchar('%');
            }
            else
            {
                _putchar('%');
                _putchar(format[i]);
                count += 2;
            }
        }
        else
        {
            _putchar(format[i]);
            count++;
        }
        i++;
    }
    va_end(args);
    return (count);
}