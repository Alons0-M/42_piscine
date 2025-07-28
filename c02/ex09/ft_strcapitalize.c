/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:50:10 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/28 18:41:04 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	alpha;

	alpha = 1;
	if (((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')
			|| (*str >= '0' && *str <= '9')))
		alpha = 0;
	return (alpha);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || (ft_str_is_alpha(str + i - 1)))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "salut,coMMent tu vas ? 42mots
//				quaRAnte-deux; cinquante+et+un";
// 	printf("%s \n", ft_strcapitalize(str));
// }