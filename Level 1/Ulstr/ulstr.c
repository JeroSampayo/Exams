/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:36:58 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/05/25 12:48:54 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(int argc, char **argv)
{
	int	len;	

	len = 0;
	if (argc == 2)
	{
		while (argv[1][len] > 'a' || argv[1][len] < 'z')
			argv[1][len] -= 32;
		while (argv[1][len] > 'A' || argv[1][len] < 'Z')
			argv[1][len] += 32;
		write(1, &argv[1][len], 1);
		len++;
	}
	write(1, "/n", 1);
	return (0);
}
