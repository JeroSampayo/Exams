/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:39:46 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/05 11:45:51 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;
	
	while(s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return(i)
			j++;
		}
		i++;
	}
	return (i);
}
