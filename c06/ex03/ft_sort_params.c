/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:58:00 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/31 13:11:48 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//Sin hacer
int	main(int argc, char **argv)
{
	int len;
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j < argc - i - 1)
		{
			len = ft_strlen(argv[i]);
			write(1, argv[i], len);
			write(1, "\n", 1);
			j++;
		}
		i++;
	}
	return 0;
}