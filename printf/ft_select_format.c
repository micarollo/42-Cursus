/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:22:59 by mrollo            #+#    #+#             */
/*   Updated: 2022/02/07 15:51:28 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_select_format(va_list ap, char *s, int i, int *size)
{
	if (s[i] == 'd' || s[i] == 'i')
		ft_print_int(ap, size);
	if (s[i] == 'c')
		ft_print_char(ap, size);
	if (s[i] == 's')
		ft_print_string(ap, size);
	if (s[i] == 'u')
		ft_print_unsig(ap, size);
	if (s[i] == 'x')
		ft_print_hex(ap, size);
	if (s[i] == 'X')
		ft_print_hexm(ap, size);
	if (s[i] == 'p')
		ft_print_p(ap, size);
	if (s[i] == '%')
		*size = *size + write(1, "%", 1);
}
