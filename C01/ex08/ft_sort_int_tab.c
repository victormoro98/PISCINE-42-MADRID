/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:50:31 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/22 15:19:15 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			while (tab[i] > tab[j])
			{
				aux = tab[i];
				tab[i] = tab [j];
				tab[j] = aux;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>
int	main()
{
	int	array[] = {2,7,9,5,4,3,2,1};
	int size = sizeof(array)/sizeof(array[0]);
	int i = 0;

	ft_sort_int_tab(array, size);
	while (i < size)
	{
		printf(" %d,", array [i]);
		i++;
	}
	return 0;	
}
