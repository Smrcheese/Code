/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 06:56:57 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/06 05:32:07 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nbrs(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0' - 1;
	while (++a <= '9')
	{
		b = '0' - 1;
		while (++b <= '9')
		{
			c = '0' - 1;
			while (++c <= '9')
			{
				d = '0' - 1;
				while (++d <= '9')
				{
					if (a < c || (a == c && b < d))
					{
						write_nbrs(a, b, c, d);
					}
				}
			}
		}
	}
}

/*

the variables are stated as chars because they are going to be printed as chars
the variables are initialized as '0' - 1 
because the first loop will increment them instantly
so we set them one value below 0, meaning: "/" 
so when the loop starts, it will increment to 0
this is mostly for visual formatting purposes, compared to the prior exercise

* /

int main()
{
	ft_print_comb2();
	return (0);
}
*/