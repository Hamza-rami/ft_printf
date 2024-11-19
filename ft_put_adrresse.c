/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adrresse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:45:42 by hrami             #+#    #+#             */
/*   Updated: 2024/11/18 11:25:58 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_help(unsigned long nbr, char *base)
{
	unsigned long	len_base;
	int				count;

	count = 0;
	len_base = 16;
	if (nbr >= len_base)
		count += ft_putnbr_help(nbr / len_base, base);
	ft_putchar(base[nbr % len_base]);
	count++;
	return (count);
}

int	ft_put_adrresse(unsigned long nbr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_putnbr_help(nbr, L16);
	return (count);
}
