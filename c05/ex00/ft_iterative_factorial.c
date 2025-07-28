/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:45:12 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/28 20:44:26 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sol;

	sol = 0;
	if (nb > 0)
	{
		sol = nb;
		while (nb - 1 > 0)
		{
			sol *= (nb - 1);
			nb--;
		}
	}
	return (sol);
}

//#include <stdio.h>
//
// int main() {
//    printf("%d", ft_iterative_factorial(5));
//    return (0);
//}