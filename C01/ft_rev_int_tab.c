/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moalmull <moalmull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:05:02 by moalmull          #+#    #+#             */
/*   Updated: 2024/08/28 17:00:07 by moalmull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev;
	int	firstindex;
	int	lastindex;

	rev = 0;
	firstindex = 0;
	lastindex = size - 1;
	while (firstindex < lastindex)
	{
		rev = tab[firstindex];
		tab[firstindex] = tab[lastindex];
		tab[lastindex] = rev;
		firstindex++;
		lastindex--;
	}
}

/*
int	main(void)
{
	int	arr[6] = {1, 2, 3, 4, 5, 6};
	int	size;

	size = 6;
	ft_rev_int_tab(arr, size);
	printf("%d, %d, %d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3], arr[4],
		arr[5]);
	return (0);
}
*/