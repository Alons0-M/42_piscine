/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:11:38 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/18 12:21:28 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *start_dest;
    int i;

    i = 0;
    if (dest && src)
    {
        start_dest = dest;
        //while((*dest++ = *src++) != '\0');
        while(src[i] != '\0' && i < n)
        {
            *dest++ = *src++;
        }
        *dest = '\0';
        return start_dest;
    }else
        return NULL;
}