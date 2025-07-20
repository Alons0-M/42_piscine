/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:21:17 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/20 12:35:31 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	alpha;

	alpha = 1;
	while (*str != '\0' && alpha)
	{
		if (!(*str >= ' ' && *str <= '~'))
			alpha = 0;
		str++;
	}
	return (alpha);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_printable(""));
	printf("%d", ft_str_is_printable("asf¿f5 "));
	printf("%d", ft_str_is_printable("5sd~ "));
	printf("%d", ft_str_is_printable("5Ç"));
	printf("%d", ft_str_is_printable("daOÓsfsfereg"));
}