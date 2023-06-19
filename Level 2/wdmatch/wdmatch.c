/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:35:19 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/19 12:40:59 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int i2 = 0;

	if (argc == 3)
	{
		while (argv[2][i2])
			if (argv[2][i2++] == argv[1][i]) 
				i += 1;
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}
