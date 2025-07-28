/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:59:51 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/28 18:33:53 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	alpha;

	alpha = 1;
	while (*str != '\0' && alpha)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
			alpha = 0;
		str++;
	}
	return (alpha);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	printf("%d", ft_str_is_alpha(""));
//	printf("%d", ft_str_is_alpha("asff5"));
//	printf("%d", ft_str_is_alpha("5sdf"));
//	printf("%d", ft_str_is_alpha("5"));
//	printf("%d", ft_str_is_alpha("dasfsfereg"));
//}