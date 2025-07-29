/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:35:22 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/29 20:52:47 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	sol;

	sol = nb;
	if (power < 0)
		sol = 0;
	if (power == 0)
		sol = 1;
	if (power > 1)
	{
		sol *= ft_recursive_power(nb, power - 1);
	}
	return (sol);
}

//#include <stdio.h>
//
// int main() {
//    printf("%d", ft_recursive_power(5, 3));
//    return (0);
//}