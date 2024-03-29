/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 00:52:38 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/12/02 02:09:55 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void capitalizer(char *str)
{
	int i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == '\t' || str[i + 1] == ' ' || str[i + 1] == '\0'))
				str[i] -= 32;
		write(1, &str[i++], 1);
	}
}
int main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		write(1, "\n", 1);
	else
		while(i < argc)
		{
			capitalizer(argv[i]);
			write(1, "\n", 1);
			i += 1;
		}
}
