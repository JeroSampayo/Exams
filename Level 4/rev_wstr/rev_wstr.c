/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:50:44 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/20 13:59:14 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int len = 0;
	int start;
	int end;
	int flag;
		
	if(argc == 2)
	{   
		while(argv[1][len] != '\0')
			len++;
		while(len >= 0)
		{
			while( argv[1][len] == '\0' || argv[1][len] == ' ' || argv[1][len] == '\t')
				len--;
			end = len;
			while(argv[1][len] && argv[1][len] != ' ' && argv[1][len] != '\t')
				len--;
			start = len + 1;
			flag = start;
			while(start <= end)
			{
				write (1, &argv[1][start],1);
				start++;		
			}
			if (flag !=0)
			{
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
}
