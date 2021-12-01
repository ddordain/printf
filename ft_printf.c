#include "libftprintf.h"

#include "libftprintf.h"

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void    ft_putchar(int c)
{
    char c_char;

    c_char = (char)c;
    write(1, &c_char, 1);
}

static void get_specification(va_list argptr, char c)
{
    if (c == 'c')
        ft_putchar(va_arg(argptr, int));
    if (c == 's')
        ft_putstr(va_arg(argptr, char *));
}

int ft_printf(const char *format, ...)
{
    va_list argptr;
    int     i;

    i = 0;
    va_start(argptr, format);
    while (format[i] != '\0')
    {
        if (format[i] != '%')
            ft_putchar(format[i]);
        else
        {
            i++;
            get_specification(argptr, format[i]);
        }
        i++;
    }
    va_end(argptr);
    return (i);
}

int main(void)
{
    char c1, c2;
    char *str = "TAIIIIISEZ VOUS";

    c1 = 'A';
    c2 = 'B';

    ft_printf("salut %c & %c, %s\n", c1, c2, str);
}