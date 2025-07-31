/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:57:41 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/31 12:14:06 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0 && i < nb - 1)
	{
		i++;
	}
	if ((nb % i == 0 || nb < 2) && nb != 2)
		return (0);
	else
		return (1);
}

//#include <stdio.h>
//
// int	main(void)
//{
//	printf("%d", ft_is_prime(13));
//	printf("%d", ft_is_prime(7));
//	printf("%d", ft_is_prime(2));
//	printf("%d", ft_is_prime(25));
//	printf("%d", ft_is_prime(1));
//	return (0);
//}