/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:06:39 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/24 17:28:58 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	reverse_bits(unsigned int num)
{
	unsigned int max_pos;
	unsigned int rev_num;
	int i;
	rev_num = 0;
	max_pos = 1 << 31;
	i = 1;
	while (max_pos >= 1)
	{
		if (num & i)
		{
			rev_num = max_pos | rev_num;
		}
		i = i << 1;
		max_pos = max_pos >> 1;
	}
	printf("%d", rev_num);
	return (rev_num);
}

int main(void)
{
	int i = 0;
	i = reverse_bits(88);
	printf("%d", i);
}
