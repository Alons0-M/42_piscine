/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:07:12 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/23 19:26:30 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int atoi;
	int neg;

	neg = 0;
	atoi = 0;
	while (*str != '\0')
	{
		if (*str == '-')
			neg++;
		while (*str >= '0' && *str <= '9')
		{
			atoi + *str;
		}
		if (*str != '-' && *str != '+')
			if (neg % 2 == 1)
				atoi *= -1;
			return atoi;	
		str++;
	}
}