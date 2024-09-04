/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalmull <moalmull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:28:48 by moalmull          #+#    #+#             */
/*   Updated: 2024/09/04 16:26:32 by moalmull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
	}
	return (s1[i] - s2[i]);
}

/*
int	main(void){
	printf("%d", ft_strcmp("Hello", "Hello1"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}
*/