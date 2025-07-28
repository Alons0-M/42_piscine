/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarredon <aarredon@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:56:27 by aarredon          #+#    #+#             */
/*   Updated: 2025/07/28 19:35:42 by aarredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int is_base(char *base)
{
	int i;
	int j;
	int len;
	
	if ((len = ft_strlen(base)) > 1) {
		i = 0;
		while(base[i] && base[i] != '+' && base[i] != '-' && base[i] != base[j])
		{
			j = i + 1;
			while(base[j] && base[i] != base[j])
			{
				j++;
			}
			i++;
    	}
		if (!base[i])
			return len;
	}
	return -1;
}

void ft_putnbr_base(int nbr, char *base)
{
	int len;
	
    if((len = is_base(base)) != -1)
	{
		
	}
    
}