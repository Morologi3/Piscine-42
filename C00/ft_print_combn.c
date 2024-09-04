/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalmull <moalmull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:32:23 by moalmull          #+#    #+#             */
/*   Updated: 2024/08/26 13:40:16 by moalmull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MAX_COMBN_SIZE 9 // Maximum size for the combination array

void	putchar(char c)
{
	write(1, &c, 1);
}

void	printcomb(int combn[], int n)
{
	int	p;

	p = 0;
	while (p < n)
	{
		putchar(combn[p] + '0');
		p++;
	}
}

void	init_comb(int combn[], int n)
{
	int	p;

	p = 0;
	while (p < n)
	{
		combn[p] = p;
		p++;
	}
}

void	update_combination(int combn[], int n)
{
	int	p;
	int	digit;
	int	maxnum;

	p = n - 1;
	maxnum = 10;
	while (p >= 0)
	{
		digit = combn[p];
		if (digit < --maxnum)
		{
			while (p < n)
			{
				combn[p] = ++digit;
				p++;
			}
			putchar(',');
			putchar(' ');
			return ;
		}
		p--;
	}
}

void	ft_print_combn(int n)
{
	int	combn[MAX_COMBN_SIZE];

	if (n > 0 && n <= MAX_COMBN_SIZE)
	{
		init_comb(combn, n);
		while (1)
		{
			printcomb(combn, n);
			if (combn[0] == 10 - n)
				break ;
			update_combination(combn, n);
		}
	}
}
