/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:42:22 by mrollo            #+#    #+#             */
/*   Updated: 2022/02/07 17:43:56 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_putnbr_base(unsigned long long nbr, char *base, int *size)
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

void	ft_print_p(va_list ap, int *size)
{
	void	*ptr;

	ptr = va_arg(ap, void *);
	*size += write(1, "0x", 2);
	ft_putnbr_base((unsigned long long)ptr, "0123456789abcdef", size);
}
