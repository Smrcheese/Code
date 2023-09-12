/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 03:42:46 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/12 15:14:36 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			str[i] = c - 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int main()
{
	char	str[] = "Hello World";

	printf("%s", ft_strupcase(str));
	return (0);
}
*/