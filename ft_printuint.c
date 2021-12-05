/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:25:54 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/03 18:41:22 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printuint(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n >= 10)
		counter += ft_printuint(n / 10);
	counter += ft_printchar((n % 10 + 48));
	return (counter);
}
