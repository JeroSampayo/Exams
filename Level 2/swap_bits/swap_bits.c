/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:10:52 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/05/25 17:44:25 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	int	temp;

	temp = octet & 0x0F;
	octet = octet >> 4;
	temp = temp << 4;
	octet = octet | temp;
	return (octet);
}

/* Alternative solution in one line.
 *{ 
 * return ((octet >> 4) | (octet << 4));
 *}
 */
