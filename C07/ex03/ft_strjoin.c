/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 01:39:54 by sezequie          #+#    #+#             */
/*   Updated: 2023/10/10 01:39:54 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (dest[++i])
		;
	while (src[++j])
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (i + j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	i = -1;
	len = 0;
	while (++i < size)
		len += ft_strlen(strs[i]);
	len += ft_strlen(sep) * (size - 1);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}

/*
#include <stdio.h>
int		main(void)
{
	char	*strs[5];
	char	*sep;
	char	*str;
	int		i;

	strs[0] = "Hello";
	strs[1] = "World";
	strs[2] = "!";
	strs[3] = "How";
	strs[4] = "are you?";
	sep = " ";
	str = ft_strjoin(5, strs, sep);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/