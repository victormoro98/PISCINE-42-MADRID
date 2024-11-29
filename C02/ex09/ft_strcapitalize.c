/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:35:42 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/21 18:10:45 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

int	is_alphanum(char str)
{
	if ((str >= 65 && str <= 90) || (str >= 97 && str <= 122)
		|| (str >= 48 && str <= 57))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	bool	is_in_word;

	i = 0;
	is_in_word = false;
	while (str[i] != '\0')
	{
		if (!is_in_word && is_alphanum(str[i]))
		{
			is_in_word = true;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (is_in_word && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (is_in_word && !is_alphanum(str[i]))
			is_in_word = false;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char a[]= "HOla QKKLSAF, sakjfosadf,weopnm l~!kaskdA";
	printf("%s", ft_strcapitalize(a));
	return 0;
}*/
