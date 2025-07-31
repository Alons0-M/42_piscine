/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:58:00 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/31 21:25:59 by aarredon         ###   ########.fr       */
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
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int	main(int argc, char **argv)
{
	int len;
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - i - 1)
		{
			if(ft_strcmp(argv[j], argv[j+1]) > 0)
			{
				ft_swap(&argv[j], &argv[j+1]);
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < argc)
	{
		len = ft_strlen(argv[j]);
		write(1, argv[j], len);
		write(1, "\n", 1);
		j++;
	}
	return 0;
}