/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 03:45:21 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/12 15:15:07 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
			str[i] = c + 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int main()
{
	char	str[] = "Hello World";

	printf("%s", ft_strlowcase(str));
	return (0);
}
*/