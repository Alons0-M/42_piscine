/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:33:05 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/22 14:27:21 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int main(void)
{
    char src[] = "Hello";
    char dest[10];
    
    // Caso normal
    printf("Test 1:\n");
    printf("Antes: src = \"%s\", dest = \"%s\"\n", src, dest);
    ft_strcpy(dest, src);
    printf("Después: src = \"%s\", dest = \"%s\"\n", src, dest);
    
    // Caso con n mayor que la longitud de src
    char src2[] = "World";
    char dest2[10] = "XXXXXXXXX";
    printf("\nTest 2:\n");
    printf("Antes: src = \"%s\", dest = \"%s\"\n", src2, dest2);
    ft_strcpy(dest2, src2);
    printf("Después: src = \"%s\", dest = \"%s\"\n", src2, dest2);
    
    // Caso con punteros nulos
    printf("\nTest 4:\n");
    char *result = ft_strcpy(NULL, src);
    printf("Resultado con dest NULL: %s\n", result ? "OK" : "NULL");
    
    return 0;
}