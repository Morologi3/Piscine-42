/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalmull <moalmull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:15:00 by moalmull          #+#    #+#             */
/*   Updated: 2024/09/10 19:16:15 by moalmull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	skip_whitespace(char *str, int i)
{
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	handle_sign(char *str, int *i)
{
	int	minus;

	minus = 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
		{
			minus *= -1;
		}
		(*i)++;
	}
	return (minus);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	sum;

	sum = 0;
	i = 0;
	i = skip_whitespace(str, i);
	minus = handle_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sum * minus);
}

/*
int	main(void)
{
	char	*n;

	n = "     ---+--+1234ab567";
	printf("%d\n", ft_atoi(n));
}
*/