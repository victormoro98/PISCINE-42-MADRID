/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 00:52:34 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/18 18:24:25 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

/*#include <stdio.h>
int	main()
{
	char *a;
	a = "hola cara cola";
	//ft_strlen(a);
	printf("el string contiene %d caracteres\n", ft_strlen(a));
	return (0);
	
}*/
