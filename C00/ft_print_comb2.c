/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalmull <moalmull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:03:52 by moalmull          #+#    #+#             */
/*   Updated: 2024/08/26 12:10:59 by moalmull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writecomb(short n)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		write(1, "0", 1);
		write(1, &c, 1);
		return ;
	}
	else
	{
		c = (n / 10) + '0';
		write(1, &c, 1);
		c = (n % 10) + '0';
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = '0';
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			if (b > a)
			{
				writecomb(a);
				write(1, " ", 1);
				writecomb(b);
				if (a != 98)
				{
					write(1, ", ", 2);
				}
			}
			b++;
		}
		a++;
	}
}
