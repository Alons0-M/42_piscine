/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:19:47 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/28 18:39:31 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	alpha;

	alpha = 1;
	while (*str != '\0' && alpha)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			alpha = 0;
		str++;
	}
	return (alpha);
}
