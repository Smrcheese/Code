/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 02:00:22 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/12 15:14:06 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 'A' || c > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	char	str[] = "HELLO";

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
*/