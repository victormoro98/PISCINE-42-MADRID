/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:41:20 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/13 19:27:37 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_combn(int n)
{
	char a[9];
	int i;
	int j;

	j = 1;
	i = 1;
	a[8] = '9';
	write(1, &a[8], 1);
	while (i < n && n > 0 && n < 10)
	{	
		a[8-i] = a[8] -i;
		write ( 1, &a[8-i] , 1);	
		i++;	
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
