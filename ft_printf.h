/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddordain <ddordain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:28:02 by ddordain          #+#    #+#             */
/*   Updated: 2021/12/03 17:53:25 by ddordain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

/* Function prototypes specific to the print of specifications */

int	ft_printchar(int c);
int	ft_printf(const char *format, ...);
int	ft_printstr(char *str);
int	ft_printint(int n);
int	ft_printuint(unsigned int n);
int	ft_printhex(unsigned long n);
int	ft_printhexup(unsigned long n);
int	ft_printp(unsigned long ptr);

#endif
