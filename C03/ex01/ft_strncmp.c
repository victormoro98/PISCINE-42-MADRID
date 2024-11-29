/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:17:31 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/25 15:48:58 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	unsigned int n;
	char a[] = "hola";
	char b[] = "hola";

	n = 2 ;
	printf("%d\n", ft_strncmp(a,b,n));
	n = 2;
	printf("%d", strncmp(a,b,n));
	return(0);
}
