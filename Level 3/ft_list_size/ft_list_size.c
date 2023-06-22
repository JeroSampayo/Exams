/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:01:08 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/22 17:38:11 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}
/*
int main() {
	// Creamos nodos
	t_list node3 = {3, NULL};
	t_list node2 = {2, &node3};
	t_list node1 = {1, &node2};
	t_list node0 = {0, &node1};

	// Llamamos a ft_list_size para obtener el tamaño de la lista
	int len = ft_list_size(&node0);

	// Imprimimos el tamaño de la lista
	printf("El tamaño de la lista es: %d\n", len);

	return 0;
}*/
