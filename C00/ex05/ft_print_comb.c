/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 06:44:43 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/06 05:35:58 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 47;
	while (++a <= 55)
	{
		b = a;
		while (++b <= 56)
		{
			c = b;
			while (++c <= 57)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (!(a == 55 && b == 56 && c == 57))
					write(1, ", ", 2);
			}
		}
	}
}

/*

this exercise if very similar to the next one
whoever in this case i'm directly using the
ascii values for the chars.

int main()
{
	ft_print_comb();
	return (0);
}
*/