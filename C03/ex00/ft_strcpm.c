/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 04:23:58 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/06 04:38:14 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcpm(char *s1, char *s2)
{
	int		i;
	char	c1;
	char	c2;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		c1 = s1[i];
		c2 = s2[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	c1 = s1[i];
	c2 = s2[i];
	return (c1 - c2);
}

/*
#include <stdio.h>
int main()
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	printf("%d\n", ft_strcpm(s1, s2));
}
*/