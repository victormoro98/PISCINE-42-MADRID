/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:35:42 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/20 16:01:08 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] -32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char a[]= "HOla QKKLÑSAF,Ñ sakjfosadf,ñweopnm ñl~!kaskdA";
	printf("%s", ft_strupcase(a));
	return 0;
}*/
