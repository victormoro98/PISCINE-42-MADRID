/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:20:24 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/20 15:25:52 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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
	char a[] = "Bc";
	char b[] = "aabz";
	char c[] = "";

	printf("%d",ft_str_is_lowercase(a));
	printf("%d",ft_str_is_lowercase(b));
	printf("%d",ft_str_is_lowercase(c));
}*/
