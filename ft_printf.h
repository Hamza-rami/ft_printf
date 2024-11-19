/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:51:57 by hrami             #+#    #+#             */
/*   Updated: 2024/11/18 11:26:21 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <libc.h>

# define L16 "0123456789abcdef"
# define U16 "0123456789ABCDEF"

int		ft_put_adrresse(unsigned long nbr);
int		ft_putnbr_base(unsigned int nbr, char *base);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putchar(char c);
int		ft_printf(const char *format, ...);
int		ft_unsigned_putnbr(unsigned int n);

#endif
