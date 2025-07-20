/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:13:47 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/20 12:46:39 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int alpha;

	alpha = 1;
	while (*str != '\0' && alpha)
	{
		if (!(*str >= '0' && *str <= '9'))
			alpha = 0;
		str++;
	}
	return (alpha);
}
