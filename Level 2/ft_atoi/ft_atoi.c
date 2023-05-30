/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiras-s <jmiras-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:51:05 by jmiras-s          #+#    #+#             */
/*   Updated: 2023/05/30 19:17:26 by jmiras-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int result = 0;
	int sign = 1;

	// Ignorar espacios en blanco y caracteres de control
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	// Manejar el signo negativo si existe
	if (*str == '-')
		sign = -1;
	if (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str -'0';
		str++;
	}
	return (sign * result);
}
