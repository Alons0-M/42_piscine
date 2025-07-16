/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:57:57 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/16 19:10:29 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	reverse(char *num, int i, int nb)
{
	int		start;
	int		end;
	char	tmp;

	while (nb > 0)
	{
		num[i++] = '0' + (nb % 10);
		nb /= 10;
	}
	if (num[0] == '-')
		start = 1;
	else
		start = 0;
	end = i - 1;
	while (start < end)
	{
		tmp = num[start];
		num[start] = num[end];
		num[end] = tmp;
		start++;
		end--;
	}
	write(1, num, i);
}

void	ft_putnbr(int nb)
{
	char	num[12];
	int		i;

	i = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		num[i++] = '-';
		nb = -nb;
	}
	reverse(num, i, nb);
}
