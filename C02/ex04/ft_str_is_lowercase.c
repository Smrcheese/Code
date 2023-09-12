/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:03:38 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/12 15:12:18 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 'a' || c > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	char	str[] = "hello";

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
*/