/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:49:57 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/25 15:51:03 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count(char *str)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count_to_find;

	i = 0;
	j = 0;
	count_to_find = count(to_find);
	if (!*to_find)
		return (str);
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		while (str[i] == to_find[j])
		{
			j++;
			i++;
			if (j == count_to_find)
				return (&str[i - count_to_find]);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char a[] = "hola que hal";
	char b[] = "a";
	char *retur;	
	retur = ft_strstr(a, b);
	printf("%s\n",retur);
	printf("%s", strstr(a,b));
	return(0);
}*/
