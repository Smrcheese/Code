/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:58:04 by sezequie          #+#    #+#             */
/*   Updated: 2023/10/10 01:45:34 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = -1;
	dest = malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
