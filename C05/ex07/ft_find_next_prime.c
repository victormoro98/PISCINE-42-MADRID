/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 00:25:41 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/28 00:25:44 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	while (i <= nb)
	{
		if (nb % i == 0)
			++count;
		++i;
	}
	if (count == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb += 1;
	}
	return (nb);
}
/*#include <stdio.h>
int	main(void)
{
	int i = -3;
	int res = ft_find_next_prime(i);
	printf("%d", res);
	return (0);
}*/
