/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversebits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:39:22 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/05/25 17:09:16 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

int	main()
{
	unsigned char	i;
	
	i = 128;
  	printf("Entrada: %d\n", i);
	printf("Resultado: %d\n", reverse_bits(i));

	i = 10;
	printf("Entrada: %d\n", i);
	printf("Resultado: %d\n", reverse_bits(i));
}
