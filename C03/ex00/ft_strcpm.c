/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 04:23:58 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/12 15:48:44 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcpm(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
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