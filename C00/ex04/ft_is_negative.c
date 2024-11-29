/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:04:58 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/12 16:20:29 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int a)
{
	if (a >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
	return ;
}

/*int	main(void)
{
	ft_is_negative(0);
	return (0);
}*/
