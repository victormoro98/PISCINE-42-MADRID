/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:20:24 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/20 15:25:07 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			r = 0;
			break ;
		}
		i++;
	}
	return (r);
}

/*#include <stdio.h>
int	main(void)
{
	char a[] = "12Bc";
	char b[] = "11*23";
	char c[] = "";

	printf("%d",ft_str_is_numeric(a));
	printf("%d",ft_str_is_numeric(b));
	printf("%d",ft_str_is_numeric(c));
}*/
