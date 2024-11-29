/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:52:08 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/27 21:52:10 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*#include <stdio.h>
int main()
{
	int  res;
	int i = 7;
	res = ft_fibonacci(i);
	printf("%d", res);
	return (0);
}*/