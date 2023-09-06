/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 04:40:37 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/06 05:11:24 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0')
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
	printf("%d\n", ft_strncmp(s1, s2, 3));
}
*/