/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:47:49 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/19 12:17:40 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int main(int argc, char **argv)
{
	int i = 0;
	int i2 = 0;

	if (argc == 3)
	{
		while (argv[2][i2] && argv[1][i])
			{
				if (argv[1][i] == argv[2][i2])
					i++;
				i2++;
			}
		if (argv[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);

	}
	write(1, "\n", 1);
}
