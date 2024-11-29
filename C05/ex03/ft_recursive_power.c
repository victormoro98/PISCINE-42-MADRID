/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:26:04 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/27 20:26:09 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int	main(void)
{
	int i = 0;
	int	power = 4;
	int	res = ft_recursive_power(i, power);
	printf("%d", res);
	return (res);
}*/