/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:40:53 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/16 19:12:42 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb2_aux(char c1, char c2, char c3, char c4)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if (c1 != '9' || c2 != '8' || c3 != '9' || c4 != '9')
		write(1, ", ", 2);
}

void	loop_comb2_aux(char c1, char c2, char c3, char c4)
{
	c1 = '0';
	while (c1 <= '9')
	{
		c2 = '0';
		while (c2 <= '8')
		{
			c3 = c1;
			while (c3 <= '9')
			{
				c4 = c2 + 1;
				while (c4 <= '9')
				{
					print_comb2_aux(c1, c2, c3, c4);
					c4++;
				}
				c3++;
			}
			c2++;
		}
		c1++;
	}
}

void	ft_print_comb2(void)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	loop_comb2_aux(c1, c2, c3, c4);
	write(1, "\n", 1);
}
