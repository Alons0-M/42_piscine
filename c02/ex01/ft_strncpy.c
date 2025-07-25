/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:11:38 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/25 13:02:57 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    if (!dest || !src)
        return NULL;
    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;        
}

// #include <stdio.h>

// int main(void)
// {
//     char src[] = "Hello";
//     char dest[10];
//     unsigned int n = 8;
    
//     // Caso normal
//     printf("Test 1:\n");
//     printf("src = \"%s\", dest = \"%s\"\n", src, dest);
//     ft_strncpy(dest, src, n);
//     printf("src = \"%s\", dest = \"%s\"\n", src, dest);
    
//     // Caso con n mayor que la longitud de src
//     char src2[] = "World";
//     char dest2[10] = "XXXXXXXXX";
//     printf("\nTest 2:\n");
//     printf("src = \"%s\", dest = \"%s\"\n", src2, dest2);
//     ft_strncpy(dest2, src2, n);
//     printf("src = \"%s\", dest = \"%s\"\n", src2, dest2);
    
//     // Caso con n menor que la longitud de src
//     char src3[] = "Programming";
//     char dest3[10] = "XXXXXXXXX";
//     unsigned int n3 = 5;
//     printf("\nTest 3:\n");
//     printf("src = \"%s\", dest = \"%s\"\n", src3, dest3);
//     ft_strncpy(dest3, src3, n3);
//     printf("src = \"%s\", dest = \"%s\"\n", src3, dest3);
    
//     // Caso con punteros nulos
//     printf("\nTest 4:\n");
//     char *result = ft_strncpy(NULL, src, n);
//     printf("NULL: %s\n", result ? "OK" : "NULL");
    
//     return 0;
// }