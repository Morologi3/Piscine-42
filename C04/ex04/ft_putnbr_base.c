/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalmull <moalmull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:54:42 by moalmull          #+#    #+#             */
/*   Updated: 2024/09/11 18:04:32 by moalmull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len;
	unsigned int	nb;

	nb = 0;
	if (!is_valid_base(base))
		return ;
	len = 0;
	while (base[len])
		len++;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -nbr;
	}
	else
	{
		nb = nbr;
	}
	if (nb >= (unsigned int)len)
		ft_putnbr_base(nb / len, base);
	ft_putchar(base[nb % len]);
}

/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");
	ft_putnbr_base(-5, "01");
	printf("\n");
	ft_putnbr_base(34, "poneyvif");
	printf("\n");
}
*/