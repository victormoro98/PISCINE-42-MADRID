/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:35:14 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/22 15:20:52 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size / 2)
	{
		aux = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = aux;
		i++;
	}
}

#include <stdio.h>
int	main()
{
	int	array[] = {1,2,4,6};
	int	size = sizeof(array)/sizeof(array[0]);
	int i = 0; 
	ft_rev_int_tab(array, size);
	while (i < size)
	{
		printf("%d", array[i]);
		i++;
	}
}
