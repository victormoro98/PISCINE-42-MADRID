/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:35:42 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/20 16:07:41 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char a[]= "HOla QKKLÑSAF,Ñ sakjfosadf,ñweopnm ñl~!kaskdA";
	printf("%s", ft_strlowcase(a));
	return 0;
}*/
