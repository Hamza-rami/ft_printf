/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:48:21 by hrami             #+#    #+#             */
/*   Updated: 2024/11/19 17:57:38 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, char *base)
{
	unsigned long	len_base;
	int				count;

	count = 0;
	len_base = 0;
	while (base[len_base])
		len_base++;
	if (nbr >= len_base)
		count += ft_putnbr_base(nbr / len_base, base);
	ft_putchar(base[nbr % len_base]);
	count++;
	return (count);
}
