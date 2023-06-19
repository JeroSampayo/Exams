/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:34:39 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/06/19 14:56:37 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char    *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;

  if (!s1 || !s2)
      return(0);
  while (*s1)
  {
    i = 0;
    while (s2[i])
    {
      if (*s1 == s2[i])
          return(char*)s1;
      i++;
    }
    s1++;
  }
return(0);
}
