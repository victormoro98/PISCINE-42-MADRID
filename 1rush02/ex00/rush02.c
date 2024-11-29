/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumoreno <gumoreno@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:03:18 by gumoreno          #+#    #+#             */
/*   Updated: 2024/11/10 23:39:17 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_row(char left_char, char central_char, char right_char, int x, int y)
{
	int	column_number;
	char	c;
	int	row_number;
	
	row_number = y,
	column_number = 1;
	while (column_number < x)
	{
		while (row_number <= y)
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
}

void	select_rowpattern(int x, int y)
{
	int	row_number;

	row_number = 1;
	while (row_number <= y)
	{
		if (row_number == 1)
			print_row('A', 'B', 'A', x, y);
		else if (row_number != y)
			print_row('B', ' ', 'B', x, y);
		else
			print_row('C', 'B', 'C', x, y);
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
