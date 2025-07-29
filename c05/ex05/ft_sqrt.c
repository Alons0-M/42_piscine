/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:53:46 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/29 21:10:39 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while(i*i < nb)
	{
		i++;
	}
	if (i*i == nb)
		return i;
	else
		return 0;
}

//#include <stdio.h>
//
//int	main(void)
//{
//	printf("%d", ft_sqrt(25));
//	return (0);
//}