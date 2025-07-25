/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:33:05 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/25 13:02:55 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strcpy(char *dest, char *src)
{
    char *start_dest;

    if (!dest || !src)
        return NULL;
    start_dest = dest;
    //while((*dest++ = *src++) != '\0');
    while(*src != '\0')
    {
        *dest++ = *src++;
    }
    *dest = '\0';
    return start_dest;
}

// #include <stdio.h>

// int main(void)
// {
//     char src[] = "Hello";
//     char dest[10];
    
//     // Caso normal
//     printf("Test 1:\n");
//     printf("src = \"%s\", dest = \"%s\"\n", src, dest);
//     ft_strcpy(dest, src);
//     printf("src = \"%s\", dest = \"%s\"\n", src, dest);
    
//     // Caso con n mayor que la longitud de src
//     char src2[] = "World";
//     char dest2[10] = "XXXXXXXXX";
//     printf("\nTest 2:\n");
//     printf("src = \"%s\", dest = \"%s\"\n", src2, dest2);
//     ft_strcpy(dest2, src2);
//     printf("src = \"%s\", dest = \"%s\"\n", src2, dest2);
    
//     // Caso con punteros nulos
//     printf("\nTest 4:\n");
//     char *result = ft_strcpy(NULL, src);
//     printf("NULL: %s\n", result ? "OK" : "NULL");
    
//     return 0;
// }