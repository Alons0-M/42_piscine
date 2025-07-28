/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:59:05 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/28 20:44:34 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	sol;

	sol = nb;
	if (nb < 0)
		return (0);
	if (nb > 1)
		sol *= ft_recursive_factorial(nb - 1);
	return (sol);
}

//#include <stdio.h>
//
// int main() {
//    printf("%d", ft_recursive_factorial(5));
//    return (0);
//}