/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:12:41 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/01 14:50:27 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		max(int* tab, unsigned int len)
{
	unsigned int i  = 0;
	int result;

	result = tab[i];
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return result;
}
/*
int main()
{
    int arr[] = {5, 2, 9, 10, 7};
    unsigned int len = sizeof(arr) / sizeof(arr[0]);
    int max_value = max(arr, len);

    printf("El valor máximo es: %d\n", max_value);

    return 0;
}
