/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:58:21 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/05/29 16:12:49 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(int argc, char **argv)
{
	int i = 0;

	if (argc == 4)
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == argv[2][0])
					write(1, &argv[3][0], 1);
				else
					write(1, &argv[1][i], 1);
				i++;
			}
		write (1, "\n", 1);
		return(0);
		}
	}
}
