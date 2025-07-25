/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:17:23 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/25 11:47:15 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    const char *hex;
    char result[4];

    hex = "0123456789abcdef";
    result[0] = '\\';
    while (*str) {
        if (*str < 32 || *str == 127) {
            
            result[1] = hex[((unsigned char)*str >> 4) & 0xF];//>> 4 desplazamiento, & 0xF ultimos bits
            result[2] = hex[(unsigned char)*str & 0xF];
            write(1, result , 3);
        } else {
            write(1, str, 1);
        }
        str++;
    }
}

int main() {
    char str[] = "Hola\nmundo\t\a";
    ft_putstr_non_printable(str);
    return 0;
}