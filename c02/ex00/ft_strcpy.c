/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:33:05 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/28 18:45:03 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*start_dest;

	if (!dest || !src)
		return (NULL);
	start_dest = dest;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (start_dest);
}

// while((*dest++ = *src++) != '\0');
// int main(void)
// {
//     char src[] = "Hello";
//     char dest[10];
//     printf("Test 1:\n");
//     printf("src = \"%s\", dest = \"%s\"\n", src, dest);
//     ft_strcpy(dest, src);
//     printf("src = \"%s\", dest = \"%s\"\n", src, dest);
//     char src2[] = "World";
//     char dest2[10] = "XXXXXXXXX";
//     printf("\nTest 2:\n");
//     printf("src = \"%s\", dest = \"%s\"\n", src2, dest2);
//     ft_strcpy(dest2, src2);
//     printf("src = \"%s\", dest = \"%s\"\n", src2, dest2);
//     printf("\nTest 4:\n");
//     char *result = ft_strcpy(NULL, src);
//     printf("NULL: %s\n", result ? "OK" : "NULL");
//     return (0);
// }