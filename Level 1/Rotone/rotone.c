/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:47:21 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/05/25 18:25:08 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while (*s)
	{	if ((*s >= 'a' && *s <= 'y') || (*s >= 'A' && *s <= 'Y'))
			ft_putchar(*s + 1);
		else if(*s == 'z' || *s == 'Z')
			ft_putchar(*s - 25);
		else
			write(1, s, 1);
		s++;
	}		
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}
