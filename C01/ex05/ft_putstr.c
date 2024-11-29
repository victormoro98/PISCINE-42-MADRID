/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 00:21:42 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/18 18:27:16 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*int	main()
{
	char *a;
	a = "Hola cara cola";
	ft_putstr(a);
	return (0);
}*/
