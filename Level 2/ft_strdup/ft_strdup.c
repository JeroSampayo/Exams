/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:34:39 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/19 14:56:37 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	int len = 0;
	char *cpy;

	while (src[len])
		len++;
	cpy = malloc(sizeof(*cpy) * (len + 1));
	if (cpy != NULL)
	{
		while (src[i])
		{
			cpy[i] = src[i];
			i++;
		}
		cpy[i] = '\0';
	}
	return (cpy);
}
/* 
int main()
{
	char *src = "HELLOW WORLD";
		ft_strdup(src);
	printf("%s", src);
}
*/
