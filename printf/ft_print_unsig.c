/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:06:19 by mrollo            #+#    #+#             */
/*   Updated: 2022/02/07 17:48:12 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_put_unsigned(unsigned int n)
{
	if (n >= 10)
	{
		ft_put_unsigned(n / 10);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar_fd((char)(n + 48), 1);
}

void	ft_print_unsig(va_list ap, int *size)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	ft_put_unsigned(n);
	*size += ft_numlen(n);
}
