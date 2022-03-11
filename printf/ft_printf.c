/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:56:07 by mrollo            #+#    #+#             */
/*   Updated: 2022/02/07 17:49:42 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		*size;

	va_start(ap, s);
	i = -1;
	size = (int *)malloc(sizeof(int));
	*size = 0;
	while (s[++i])
	{
		if (s[i] == '%')
		{
			ft_select_format(ap, (char *)s, i + 1, size);
			i++;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			*size = *size + 1;
		}
	}
	i = *size;
	free(size);
	return (i);
}
