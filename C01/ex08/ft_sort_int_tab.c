/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:59:45 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/07 17:38:58 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

/*
int main()
{
	int tab[5] = {5, 4, 3, 2, 1};
	int *ptr;
	int size;

	ptr = tab;
	size = 5;
	ft_sort_int_tab(ptr, size);
	return (0);
}
*/