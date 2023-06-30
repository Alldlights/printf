#include "main.h"

/**
 * _printf - function that print anything
 * handling format specifier, precision, flags, width and all
 * @format: paraneter type used
 * Return: interger 0 on success
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;

	va_list our_args;

	va_start(our_args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
		if (*format == '%')
		{
			_putchar('%');
			i++;
		}
		else if (*format == 'c')
		{
			char x = va_arg(our_args, int);

			_putchar(x);
			i++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(our_args, char *);

			while (*str)
			{
				_putchar(*str);
				str++;
				i++;
			}
		}
		}
		else
		{
			_putchar(*format);
			i++;
		}
		format++;
	}
	va_end(our_args);

	return (i);
}
