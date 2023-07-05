/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:58:12 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/07/05 13:17:03 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_atoi(char *s)
{
	int	res = 0;

	while (*s)
		res = res * 10 + *s++ - 48;
	return (res);
}

int	is_prime(int num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		int sum = 0;

		while (num > 0)
		{
			if (is_prime(num))
				sum += num;
			num--;
		}
		put_nbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
