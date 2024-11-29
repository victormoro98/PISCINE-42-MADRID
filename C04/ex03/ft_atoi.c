/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 23:24:09 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/26 02:38:30 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_atoi(char *str)
{
	bool	is_negative;
	int		n;

	is_negative = false;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative = !is_negative;
		++str;
	}
	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		++str;
	}
	if (is_negative)
		n = -n;
	return (n);
}
/*#include <stdio.h>

int	main(void)

{
	char numero[] = "   --+-+-+r12345";
	int	res = ft_atoi(numero);
	printf("%d", res);
}*/
