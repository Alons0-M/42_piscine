/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:18:09 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/26 16:48:53 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] && str[i + j] && str[i + j] == to_find[j])
			{
				j++;
			}
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

// int main() {
//    char *texto = "Hola mundo";
//    char *busqueda = "mundo";
//    char *resultado = ft_strstr(texto, busqueda);
//
//    if (resultado)
//        printf("Resultado: %s\n", resultado); // "mundo"
//    return (0);
//}