/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalmull <moalmull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:13:41 by moalmull          #+#    #+#             */
/*   Updated: 2024/09/09 16:14:06 by moalmull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]) == 1)
		{
			write(1, &str[i], 1);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putchar('\n');
}
*/