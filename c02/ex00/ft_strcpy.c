/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:33:05 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/18 11:33:13 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
    char *start_dest;

    if (dest && src)
    {
        start_dest = dest;
        //while((*dest++ = *src++) != '\0');
        while(*src != '\0')
        {
            *dest++ = *src++;
        }
        *dest = '\0';
        return start_dest;
    }else
        return NULL;
}
