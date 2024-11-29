/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoro-lu <vmoro-lu@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:52:44 by vmoro-lu          #+#    #+#             */
/*   Updated: 2024/11/26 23:39:28 by vmoro-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

int	len_base(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		++str;
		++i;
	}
	return (i);
}

bool	non_repeat(char *str)
{
	int		i;
	int		j;
	bool	not_valid;

	i = 0;
	not_valid = false;
	while (str[i] != '\0' && !not_valid)
	{
		j = i + 1;
		while (str[j] != '\0' && !not_valid)
		{
			if (str[i] == str[j])
				not_valid = true;
			++j;
		}
		++i;
	}
	return (not_valid);
}

bool	non_sign(char *str)
{
	int		i;
	bool	not_valid;

	i = 0;
	not_valid = false;
	while (str[i] != '\0' && !not_valid)
	{
		if ((str[i] == '-' || str[i] == '+' || str[i] < 32
				|| str[i] > 126) && !not_valid)
			not_valid = true;
		i++;
	}
	return (not_valid);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!non_sign (base) && !non_repeat (base) && len_base(base) > 1)
	{
		if (nbr == -2147483648)
		{
			nbr = -nbr;
			ft_putnbr_base(nbr / len_base(base), base);
			ft_putchar(base[nbr % len_base(base)]);
		}
		else if (nbr < 0)
		{
			nbr = -nbr;
			write (1, "-", 1);
			ft_putnbr_base(nbr, base);
		}
		else if (nbr >= len_base(base))
		{
			ft_putnbr_base(nbr / len_base(base), base);
			ft_putchar(base[nbr % len_base(base)]);
		}
		else if (nbr < len_base(base))
			ft_putchar(base[nbr]);
	}
}

/*#include <stdio.h>
int main(void)
{

	//int result;
	char base[] = "1";
	int nbr = 1234;

	ft_putnbr_base(nbr, base);
	//bool    sign_invalid;
	//bool    repeat;

	//sign_invalid = non_sign(a);
	//repeat = non_repeat(a);

	//if (sign_invalid || repeat)
		//result = 0;
	//else
		//result = 1;

	//printf("%d", result);
	return(0);
}*/
