/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:26:32 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/20 12:46:28 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "";
	char str1[] = "aSDf5";
	char str2[] = "5sFf";
	char str3[] = "5";
	char str4[] = "dasfAdFFSereg";
	printf("%s \n", ft_strupcase(str));
	printf("%s \n", ft_strupcase(str1));
	printf("%s \n", ft_strupcase(str2));
	printf("%s \n", ft_strupcase(str3));
	printf("%s \n", ft_strupcase(str4));
}