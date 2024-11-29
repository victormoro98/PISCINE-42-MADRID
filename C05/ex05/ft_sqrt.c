/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:36:12 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/27 22:36:26 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

int	ft_sqrt(int nb)
{
	int		i;

	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
	int i;
	i = 130;
	int res = ft_sqrt(i);
	printf ("%d", res);
	return(0);
}*/