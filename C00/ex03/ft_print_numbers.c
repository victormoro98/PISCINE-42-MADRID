/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:04:58 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/12 16:45:06 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}

/*int	main(void)
{
	ft_print_number();
	return (0);
}*/
