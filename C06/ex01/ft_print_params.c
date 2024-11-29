/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 07:56:21 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/29 07:56:23 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	str_len(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		++count;
		++str;
	}
	return (count);
}

int main(int argc, char **argv)
{
	int	i;
	int j;

	j = argc - 1;
	i = 0;
	while (j >= 1)
	{
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
		i = 0;
	}
	return(0);	
}
