/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:12:01 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/03 18:40:43 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexup(unsigned long n)
{
	char	*base16;
	int		counter;

	base16 = "0123456789ABCDEF";
	counter = 0;
	if (n == 0)
		counter += ft_printchar('0');
	else
	{
		if (n >= 16)
		{
			counter += ft_printhexup(n / 16);
			counter += ft_printhexup(n % 16);
		}
		else
		{
			write(1, &base16[n], 1);
			counter++;
		}
	}
	return (counter);
}
