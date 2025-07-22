/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:19:07 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/22 19:19:28 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	char *temp;
	int i;

	temp = dest;
	while (*dest)
	{
		dest++;
	}
	i = 0;
	while (src[i] && i < nb)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return temp;
}