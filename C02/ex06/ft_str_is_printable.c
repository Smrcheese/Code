/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 02:04:45 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/12 15:14:22 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < ' ' || c > '~')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	char	str[] = "Hello World";

	printf("%d", ft_str_is_printable(str));
	return (0);
}
*/