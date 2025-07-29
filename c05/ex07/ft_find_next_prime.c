/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:10:00 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/29 21:25:29 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0 && i < nb - 1)
	{
		i++;
	}
	if (nb % i == 0 && nb != 2)
		return (0);
	else
		return (1);
}

int ft_find_next_prime(int nb)
{
	int i;
	if (ft_is_prime(nb))
		return nb;
	else
	{
		if (nb < 1)
			nb = 1;
		i = 1;
		while(!ft_is_prime(nb+i))
		{
			i++;
		}
		return nb+i;
	}
}

int	main(void)
{
	printf("%d", ft_find_next_prime(13));
	printf("%d", ft_find_next_prime(8));
	printf("%d", ft_find_next_prime(25));
	printf("%d", ft_find_next_prime(1)); //no va
	printf("%d", ft_find_next_prime(2));
	return (0);
}