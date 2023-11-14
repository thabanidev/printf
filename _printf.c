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
    if (format == NULL)
    {
        return -1;
    }

    int i;
    int count;

    i = 0;
    count = 0;
    
    va_list args;

    va_start(args, format);

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '\0')
            {
                va_end(args);
                return -1;
            }

            if (format[i] == 'c')
            {
                count += _putchar(va_arg(args, int));
            }
            else if (format[i] == 's')
            {
                char *str = va_arg(args, char *);

                if (str == NULL)
                {
                    count += _puts("(null)");
                }
                else
                {
                    count += _puts(str);
                }
            }
            else if (format[i] == '%')
            {
                count += _putchar('%');
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
            else
            {
                fprintf(stderr, "Error: Invalid format specifier: %%%c\n", format[i]);
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
    return count;
}