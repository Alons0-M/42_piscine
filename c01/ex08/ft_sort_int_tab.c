/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:09:14 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/22 15:52:41 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6}; // Array desordenado
    int size = sizeof(arr) / sizeof(arr[0]); // Calcula el tamaño del array

    printf("Array original: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ft_sort_int_tab(arr, size); // Ordena el array

    printf("Array ordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}