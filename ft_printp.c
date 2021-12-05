/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:55:10 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/03 18:40:59 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(unsigned long ptr)
{
	int	counter;

	counter = 0;
	write(1, "0x", 2);
	if (ptr == 0)
	{
		ft_printchar('0');
		return (3);
	}
	else
	{
		counter += ft_printhex(ptr);
		return (counter + 2);
	}
}
