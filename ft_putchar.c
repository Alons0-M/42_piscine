/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <alonsoamadorarredondo@gmail.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 01:14:06 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/12 01:14:06 by aarredon         ###   ########.fr       */
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