/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <hrami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:00:00 by hrami             #+#    #+#             */
/*   Updated: 2024/11/22 10:01:06 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	help_ft_printf(va_list *list, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(*list, int));
	else if (c == 's')
		count += ft_putstr(va_arg(*list, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(*list, int));
	else if (c == 'u')
		count += ft_unsigned_putnbr(va_arg(*list, unsigned int));
	else if (c == 'x')
		count += ft_putnbr_base(va_arg(*list, unsigned int), L16);
	else if (c == 'X')
		count += ft_putnbr_base(va_arg(*list, unsigned int), U16);
	else if (c == 'p')
		count += ft_put_adrresse(va_arg(*list, unsigned long));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	list;

	if (write(1, "", 0) == -1)
		return (-1);
	va_start(list, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break ;
			count += help_ft_printf(&list, format[i]);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (count);
}
