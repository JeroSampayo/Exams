/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:41:54 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/04/13 10:59:35 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int number)
{
	char	str[10] = "0123456789";

	if (number > 9)
			ft_write(number / 10);
	write (1, &str[number % 10], 1);
}

int main()
{
	int i;
	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write(i);
		i++;
		write (1, "\n", 1);	
	}
}
