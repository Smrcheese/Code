/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 01:48:12 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/13 16:16:02 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		if (nb == -2147483648)
		{
			write(1, "2147483648", 11);
			return ;
		}
	}
	if (nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}

/*
Note:

this function was hard to implement because of the recursion
the recursion is needed to print the digits in the correct order
but it also makes it hard to understand what is happening
whoever, to summarize, the function ifs work like this:

the first if determines if the number is negative, if so
it will print a "-" and make it positive

the second if determines if the number is a single digit
if so, it will print it by first converting it to a char
by adding '0' to it

the else statement is the recursion part
it will call the function again, but this time with the number
divided by 10. doing this will separate the number into digits
and the function will print them in the correct order

* /

int main()
{
	ft_putnbr(1066750);
	return (0);
}
*/