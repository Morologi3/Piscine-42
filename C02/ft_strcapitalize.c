/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalmull <moalmull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:34:13 by moalmull          #+#    #+#             */
/*   Updated: 2024/09/04 15:50:31 by moalmull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
	}
	return (1);
}

int	is_lowercase(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	ft_strlowcase(str);
	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[i]))
		{
			if (j && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
			}
			j = 0;
		}
		else if (!is_digit(str[i]))
		{
			j = 1;
		}
		i++;
	}
	return (str);
}

/*
int	main(void){
	char b[] = "hello welcome to this world";
	printf("%s", ft_strcapitalize(b));
	return(0);
}
*/