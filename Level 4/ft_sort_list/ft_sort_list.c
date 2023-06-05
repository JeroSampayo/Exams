/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:34:45 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/05 13:41:16 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void ft_swap(t_list *a, t_list *b)
{
	int tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int flag;
	t_list *new_lst;

	flag = 1;
	new_lst = lst;
	while (flag == 1)
	{
		flag = 0;
		while (new_lst && new_lst->next)
		{
			if(cmp(new_lst->data, new_lst->next->data) == 0)
			{
				ft_swap(new_lst, new_lst->next);
				flag = 1;
			}
		}
		new_lst = new_lst->next;
	}
	return (lst);
}
