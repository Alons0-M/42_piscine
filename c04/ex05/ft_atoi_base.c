/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:59:56 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/28 19:48:55 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int is_base(char *base)
{
	int i;
	int j;
	int len;
	
	if ((len = ft_strlen(base)) > 1) {
		i = 0;
		while(base[i] && base[i] != '+' && base[i] != '-' && base[i] != base[j])
		{
			j = i + 1;
			while(base[j] && base[i] != base[j])
			{
				j++;
			}
			i++;
    	}
		if (!base[i])
			return len;
	}
	return -1;
}

int ft_atoi_base(char *str, char *base)
{
    int len;
	
    if((len = is_base(base)) != -1)
	{
		
	}
}

#include <stdio.h>

int main() {
    char str[] = "--++-+--5345as4d-+3";
    printf("%d", ft_atoi_base(str, "01")); //0123456789ABCDEF poniguay
    return 0;
}