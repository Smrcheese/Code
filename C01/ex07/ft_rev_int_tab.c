/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:36:28 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/07 17:47:28 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = *(tab + i);
		*(tab + i) = *(tab + size - i - 1);
		*(tab + size - i - 1) = temp;
		i++;
	}
}

/*
int main()
{
	int tab[5] = {1, 2, 3, 4, 5};
	int *ptr;
	int size;

	ptr = tab;
	size = 5;
	ft_rev_int_tab(ptr, size);
	return (0);
}
*/