/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:29:19 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/31 12:41:01 by aarredon         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int len;
	int i;

	i = 1;
	while (i < argc)
	{
		len = ft_strlen(argv[i]);
		write(1, argv[i], len);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}