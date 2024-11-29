/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:11:40 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/15 01:57:54 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int	*b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*#include <stdio.h>
int 	main(void)
{
	int a = 3;
	int b = 5;
	printf("a antes: %d\n", a);
	printf("b antes: %d\n", b);
	ft_swap(&a,&b);
	printf("a despues: %d\n", a);
	printf("b despues: %d\n", b);
}*/
