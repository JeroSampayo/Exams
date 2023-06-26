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

int     ft_atoi(const char *str)
{
        int result = 0;
        int flag = 1;
        while (*str == 32 || (*str >= 9 && *str <= 13))
                str++;
        if (*str == '-')
                flag = -1;
        if (*str == '-' || *str == '+')
                str++;
        while (*str >= '0' && *str <= '9')
        {
                result = result * 10 + *str - '0';
                str++;
        }
        return (flag * result);
}
/*
int main()
{
        char *str = "246810";
        int i;
        i = ft_atoi(str);
        printf("%i", i);
}*/
