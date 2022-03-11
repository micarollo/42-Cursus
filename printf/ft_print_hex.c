/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:35:50 by mrollo            #+#    #+#             */
/*   Updated: 2022/02/07 17:36:02 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_base(unsigned long nbr, char *base, int *size)
{
	if (nbr >= 16)
	{
		ft_putnbr_base(nbr / 16, base, size);
		nbr = nbr % 16;
	}
	if (nbr <= 16)
	{
		*size += write(1, &base[nbr], 1);
	}
}

void	ft_print_hex(va_list ap, int *size)
{
	unsigned int	temp;

	temp = va_arg(ap, unsigned int);
	ft_putnbr_base(temp, "0123456789abcdef", size);
}

void	ft_print_hexm(va_list ap, int *size)
{
	unsigned int	temp;

	temp = va_arg(ap, unsigned int);
	ft_putnbr_base(temp, "0123456789ABCDEF", size);
}
