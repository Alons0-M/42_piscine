/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:42:56 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/29 20:56:21 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	sol;

	sol = 0;
	if (index < 0)
		return (-1);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		sol = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	}
	return (sol);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	printf("%d", ft_fibonacci(6));
//	return (0);
//}