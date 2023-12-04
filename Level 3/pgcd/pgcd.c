/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:35:16 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/12/04 20:35:20 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int nbr1;
	int nbr2;

	if (argc == 3)
	{
		if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}
