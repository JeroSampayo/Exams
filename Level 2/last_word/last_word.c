/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:30:42 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/07/14 20:48:15 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int main (int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		while (i >= 0 && (argv[1][i-1] == ' ' || argv[1][i-1] == '\t'))
			--i;
		while (i >= 0 && argv[1][i-1] != 32 && argv[1][i-1] != '\t')
			--i;
       if (i >= 0)
        {
            while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
                write(1, &argv[1][i], 1);
                i++;
            }
		}
	}
	write(1, "\n", 1);
}
