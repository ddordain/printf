/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:50:34 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/03 18:40:54 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printint(int n)
{
	unsigned int	nbr;
	int				counter;

	counter = 0;
	if (n < 0)
	{
		counter += ft_printchar((int)('-'));
		nbr = (unsigned int)(n * -1);
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= 10)
		counter += ft_printint(nbr / 10);
	counter += ft_printchar((nbr % 10 + 48));
	return (counter);
}
