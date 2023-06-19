/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:57:39 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/19 11:16:54 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int check(int c, char *str, int index)
{
	int i = 0;

	while(i < index)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return  1;
}

int main(int argc, char **argv)
{
	int i;
	int i2;
	int i3;

	if (argc == 3)
	{
		while (argv[1][i] != '\0')
			i++;
		while (argv[2][i2] != '\0')
		{
			argv[1][i] = argv[2][i2];
			i++;
			i2++;
		}
		i--;
		while (i3 <= i)
		{
			if (check(argv[1][i3], argv[1], i3) == 1)
				write (1, &argv[1][i3], 1);
			i3++;
		}
	}
	write(1, "\n", 1);
}
