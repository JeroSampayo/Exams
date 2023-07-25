/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:39:10 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/07/18 17:57:23 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int check(int c, char *str, int index)
{
	int i = 0;
	while (i < index)
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
	int j = 0;
	int k = 0;
	if (argc == 3)
	{
		while (argv[1][++i] != '\0')
		while (argv[2][j] != '\0')
		{
			argv[1][i] = argv[2][j];
			j++;
			i++;
		}
		i--;
		while (k <= i)
		{
			if (check(argv[1][k], argv[1], k) == 1)
				write(1, &argv[1][k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
}
