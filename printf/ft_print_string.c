/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:10:02 by mrollo            #+#    #+#             */
/*   Updated: 2022/02/07 17:45:35 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_string(va_list ap, int *size)
{
	char	*str;

	str = va_arg(ap, char *);
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	*size += ft_strlen(str);
}
