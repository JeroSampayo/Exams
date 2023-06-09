/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:01:55 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/28 17:40:39 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int check(int c, char *str, int k)
{
	int i = 0;

	while (i < k)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int main(int argc, char **argv)
{
	int i = -1;
	int j = -1;
	int k = 0;
	if (argc == 3)
	{
		while (argv[1][++i])
		while (argv[2][++j])
		{
			if (argv[1][i] == argv[2][j])
			{
				argv[1][i] = argv[2][j];
				i++;
			}
		}
		while (k < i)
		{
			if (check(argv[1][k], argv[1], k) == 1)
					write(1, &argv[1][k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
}
