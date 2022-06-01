/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:57:05 by mrollo            #+#    #+#             */
/*   Updated: 2022/06/01 19:40:20 by mrollo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int				content;
	int				position;
	struct s_list	*next;
}			t_list;

//char    **ft_split(char const *s, char c);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list *lst, t_list *new);
t_list  *ft_lstnew(int content);
void    ft_swap(int *a, int *b);
int    *ft_sort_int_tab(int *tab, int size);

#endif
