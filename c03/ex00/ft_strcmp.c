/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:08:47 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/26 16:47:52 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

//#include <stdio.h>
// int main(void)
//{
//	char s1[] = "Hell";
//	char s2[] = "Hello";
//	char s3[] = "Hellb";
//	printf("%d \n", ft_strcmp(s1, s2));
//	printf("%d \n", ft_strcmp(s3, s2));
//	printf("%d \n", ft_strcmp(s2, s3));
//}