/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:06:39 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/03/24 16:39:22 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void  print_bits(int num)
{
  int i;
  i = 128;
  while (i > 0)
  {
    if (num & i)
      printf("1");
    else
      printf("0");
    i = i >> 1;
  }
}
