/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:13:54 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/07/25 15:16:10 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char *ft_itoa(int nbr)
{
    if (nbr == -2147483648) // Comprobamos el caso especial
		return "-2147483648\0";

	int temp = nbr;
	int len = 0;

	if (nbr <= 0)
		len++;
	while (temp)
	{
		temp /= 10;
		len++;
	}
	char *result = (char *)malloc(sizeof(char) * (len + 1));

	if (result == NULL)
		return NULL;

	result[len] = '\0';

	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}

	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		result[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return result;
}
