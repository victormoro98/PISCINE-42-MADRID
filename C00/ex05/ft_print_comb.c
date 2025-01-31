/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:24:46 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/20 16:41:08 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = '0';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write(1, a, 3);
				if (a[0] != '7' || a[1] != '8' || a[2] != '9')
					write(1, ", ", 2);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
