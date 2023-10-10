/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 05:27:26 by sezequie          #+#    #+#             */
/*   Updated: 2023/10/10 01:45:56 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

static	int	rushifs(int x, int y, int i, int j)
{
	if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1))
		ft_putchar('/');
	else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
		ft_putchar('\\');
	else if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

int	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			rushifs(x, y, i, j);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}
