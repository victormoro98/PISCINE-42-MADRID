/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:20:24 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/20 13:35:41 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			r = 0;
		}
		i++;
	}
	return (r);
}

/*#include <stdio.h>
int	main(void)
{
	char a[] = "BBZA";
	char b[] = "AabBz";
	char c[] = "";

	printf("%d",ft_str_is_uppercase(a));
	printf("%d",ft_str_is_uppercase(b));
	printf("%d",ft_str_is_uppercase(c));
}*/
