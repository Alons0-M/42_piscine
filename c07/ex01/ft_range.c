/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:27:40 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/31 14:12:21 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int *ft_range(int min, int max)
{	
	int *array;
	int i;
	
	i = 0;
	if (min < max)
		array = (int *)malloc((max-min) * sizeof(int));
	else
		array = NULL;
	while(min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return array;
}

//#include <stdio.h>
//int	main(void)
//{
//	int *array = ft_range(2, 7);
//	int i = 0;	
//	while(i < 5)
//	{
//		printf("%d", array[i]);
//		i++;
//	}
//	return 0;
//}


