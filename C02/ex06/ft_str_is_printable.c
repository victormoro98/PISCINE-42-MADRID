/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:37:08 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/20 15:31:36 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			r = 0;
			break ;
		}
		i++;
	}
	return (r);
}

/*#include <stdio.h>
int main(void)
{
	char a[] = " A*~!";
	char b[] = "HOLA";
	char c = 4;
	char d[] = "";
	printf("%d", ft_str_is_printable(a));
	printf("%d", ft_str_is_printable(b));
	printf("%d", ft_str_is_printable(&c));
	printf("%d", ft_str_is_printable(d));
}*/
