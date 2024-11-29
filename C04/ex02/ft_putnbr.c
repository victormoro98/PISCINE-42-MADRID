/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:58:57 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/13 14:36:59 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	c = c + 48;
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
		ft_putnbr(nb);
	}
	else if (nb >= 10 && nb <= 2147483647)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10);
	}
	else if (0 <= nb && nb <= 9)
		ft_putchar(nb);
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/
