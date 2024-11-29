/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:10:39 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/15 02:02:13 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	division;
	int	module;

	division = *a / *b;
	module = *a % *b;
	*b = module;
	*a = division;
}
/*#include <stdio.h>
int	main()
{
	int	a = 6;
	int b = 2;

	ft_ultimate_div_mod(&a,&b);
	printf("valor a -> div: %d\n", a);
	printf("valor a -> div: %d\n", b);
	return (0);
}*/
