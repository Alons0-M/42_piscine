/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:44:37 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/31 12:13:32 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	sol;

	sol = nb;
	if (power < 0)
		sol = 0;
	if (power == 0)
		sol = 1;
	while (power > 1)
	{
		sol *= nb;
		power--;
	}
	return (sol);
}

//#include <stdio.h>
//
// int main() {
//    printf("%d", ft_iterative_power(5, 3));
//    return (0);
//}