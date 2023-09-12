/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 03:50:08 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/12 15:15:31 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	char	prev;

	i = 0;
	prev = ' ';
	while (str[i] != '\0')
	{
		c = str[i];
		if (prev == ' ' && (c >= 'a' && c <= 'z'))
			str[i] = c - 32;
		else if (prev != ' ' && (c >= 'A' && c <= 'Z'))
			str[i] = c + 32;
		prev = c;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int main()
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/