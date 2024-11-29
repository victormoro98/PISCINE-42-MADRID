/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:38:03 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/28 14:38:58 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	str_len(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		++count;
		++str;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int	len;

	(void)argc;
	len = str_len(argv[0]);
	write (1, argv[0], len);
	write (1, "\n", 1);
	return (0);
}
