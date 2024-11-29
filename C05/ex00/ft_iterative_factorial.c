/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:44:15 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/27 12:44:19 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 0)
	{
		res = nb;
		while (nb != 1)
		{
			res *= nb - 1;
			nb--;
		}
		return (res);
	}
	else if (nb == 0)
		return (res);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int nb = 5;
	printf("%d",ft_iterative_factorial(nb));
	return (0);
}*/