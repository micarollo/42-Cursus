/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:49:04 by mrollo            #+#    #+#             */
/*   Updated: 2022/02/07 17:38:18 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_int(va_list ap, int *size)
{
	int	temp;

	temp = va_arg(ap, int);
	ft_putnbr_fd(temp, 1);
	*size = *size + ft_numlen(temp);
}
