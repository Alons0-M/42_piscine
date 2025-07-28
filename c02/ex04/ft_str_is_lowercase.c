/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:17:15 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/28 18:39:23 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	alpha;

	alpha = 1;
	while (*str != '\0' && alpha)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			alpha = 0;
		str++;
	}
	return (alpha);
}
