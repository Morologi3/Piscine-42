/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalmull <moalmull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:30:07 by moalmull          #+#    #+#             */
/*   Updated: 2024/08/28 17:00:17 by moalmull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	issorted(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	temp = 0;
	i = 0;
	while (!issorted(tab, size))
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	int	arr[6] = {21, 32, 93, 14, 25, 6};
	int	size;

	size = 6;
	ft_sort_int_tab(arr, size);
	printf("%d, %d, %d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3], arr[4],
		arr[5]);
	return (0);
}
*/