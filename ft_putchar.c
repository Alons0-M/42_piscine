/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 01:17:03 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/12 01:17:03 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c) {
    write(1, &c, 1);
}
    
int main(void)
{
    ft_putchar('A');
    ft_putchar('\n');
    return (0);
}