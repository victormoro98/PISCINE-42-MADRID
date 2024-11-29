/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumoreno <gumoreno@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:03:18 by gumoreno          #+#    #+#             */
/*   Updated: 2024/11/10 21:25:47 by aholuban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_row(char left_char, char central_char, char right_char, int x)
{
	int		column_number;
	char	c;

	column_number = 1;
	while (column_number <= x)
	{
		if (column_number == 1)
		{
			c = left_char;
			ft_putchar(c);
		}
		else if (column_number != x)
		{
			c = central_char;
			ft_putchar(c);
		}
		else
		{
			c = right_char;
			ft_putchar(c);
			ft_putchar('\n');
		}
		column_number++;
	}
}

void	select_rowpattern(int x, int y)
{
	int	row_number;

	row_number = 1;
	while (row_number <= y)
	{
		if (row_number == 1)
			print_row('A', 'B', 'C', x);
		else if (row_number != y)
			print_row('B', ' ', 'B', x);
		else
			print_row('A', 'B', 'C', x);
		row_number++;
	}
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write(1, "ERROR input numbers must be greater than 0", 42);
	}
	select_rowpattern(x, y);
}
