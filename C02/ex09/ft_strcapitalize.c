/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 03:50:08 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/12 16:20:54 by sezequie         ###   ########.fr       */
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
		if ((c >= 'a' && c <= 'z') && (prev == ' ' \
		|| prev == '+' || prev == '-'))
			str[i] = c - 32;
		else if ((c >= 'A' && c <= 'Z') && (prev != ' ' \
		&& prev != '+' && prev != '-'))
			str[i] = c + 32;
		prev = c;
		i++;
	}
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