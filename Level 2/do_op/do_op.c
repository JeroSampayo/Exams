/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:24:13 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/05/30 16:07:16 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int resultado;
		int first = atoi(argv[1]);
		int third = atoi(argv[3]);
		
		if (argv[2][0] == '+')
		{
			resultado = first + third;
			printf("%d", resultado);
		}
		else if (argv[2][0] == '-')
		{
			resultado = first - third;
			printf("%d", resultado);
		}
		else if (argc[2][0] == '*')
		{
			resultado = first * third;
			printf("%d", resultado);
		}
		else if (argc[2][0] == '/')
		{
			resultado = first / third;
			printf("%d", resultado);
		}
		else if (argc[2][0] == '%')
		{
			resultado = first % third;
			printf("%d", resultado);
		}
	}
	write(1, "\n", 1);
}
