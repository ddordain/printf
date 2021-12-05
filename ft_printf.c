/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:09:18 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/03 18:40:05 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_specification(va_list argptr, char c)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter += ft_printchar(va_arg(argptr, int));
	if (c == 's')
		counter += ft_printstr(va_arg(argptr, char *));
	if (c == 'd' || c == 'i')
		counter += ft_printint(va_arg(argptr, int));
	if (c == 'u')
		counter += ft_printuint(va_arg(argptr, unsigned int));
	if (c == 'x')
		counter += ft_printhex(va_arg(argptr, unsigned int));
	if (c == 'X')
		counter += ft_printhexup(va_arg(argptr, unsigned int));
	if (c == 'p')
		counter += ft_printp((unsigned long)va_arg(argptr, void *));
	if (c == '%')
		counter += ft_printchar('%');
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	argptr;
	size_t	i;
	int		counter;

	va_start(argptr, format);
	i = 0;
	counter = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			counter += ft_printchar(format[i]);
		}
		else
		{
			i++;
			counter += get_specification(argptr, format[i]);
		}
		i++;
	}
	va_end(argptr);
	return (counter);
}
