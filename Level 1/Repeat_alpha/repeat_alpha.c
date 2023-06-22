/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:46:58 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/22 11:02:28 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char **argv)
{
	int i = -1;
	int count = 0;

	if (argc == 2)
	{
		while (argv[1][++i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				count = argv[1][i] - 96;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				count = argv[1][i] - 64;
			else
				write(1, &argv[1][i], 1);
			while (count)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
		}
	}
	write(1, "\n", 1);
    return (0);
}
