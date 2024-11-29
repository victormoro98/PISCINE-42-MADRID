/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:26:53 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/15 02:01:15 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int	 main()
{
	int	a;
	int b;
	int lqmsdlc;
	int	lqmsdec;
	a = 10;
	b = 3;

	ft_div_mod(a,b,&lqmsdlc,&lqmsdec);
	printf("division = %d\nmodulo = %d\n", lqmsdlc, lqmsdec);

	return (0);
}*/
