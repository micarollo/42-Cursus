/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:25:38 by mrollo            #+#    #+#             */
/*   Updated: 2022/02/07 15:52:10 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include <stdio.h>

int		ft_printf(const char *s, ...);
void	ft_print_int(va_list ap, int *size);
void	ft_print_string(va_list ap, int *size);
void	ft_print_char(va_list ap, int *size);
void	ft_print_unsig(va_list ap, int *size);
void	ft_print_hex(va_list ap, int *size);
void	ft_print_hexm(va_list ap, int *size);
void	ft_print_p(va_list ap, int *size);
void	ft_select_format(va_list ap, char *s, int i, int *size);
int		ft_numlen(long int n);

#endif
