/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:29:05 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/27 22:57:05 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		result *= nb;
		--power;
	}
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	int i = 0;
	int	power = 6;
	int	res = ft_iterative_power(i, power);
	printf("%d", res);
	return (res);
}*/
