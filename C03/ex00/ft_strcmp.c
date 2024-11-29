/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 10:51:37 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/24 22:34:39 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			break ;
		}
		else if (s1[i] < s2[i])
		{
			break ;
		}
		else
			i++;
	}
	return (s1[i] - s2[i]);
}

/*#include<stdio.h>
#include <string.h>
int	main(void)
{
	char a[] = "Aoooo";
	char b[] = "Biiiiii";
	printf("%d\n", ft_strcmp(a,b));
	printf("%d", strcmp(a,b));
}*/
