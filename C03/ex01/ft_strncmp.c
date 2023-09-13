/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 04:40:37 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/13 18:24:01 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (unsigned int)i < n)
	{
		c1 = s1[i];
		c2 = s2[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	char	s1[] = "";
	char	s2[] = "Hello";
	printf("%d\n", ft_strncmp(s1, s2, 3));
}
*/