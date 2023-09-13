/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:50:11 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/13 14:27:04 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		len;
	char	*ptr;

	if (size == 0)
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	len = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			ptr[len++] = strs[i][j];
		j = -1;
		while (sep[++j] && i < size - 1)
			ptr[len++] = sep[j];
	}
	ptr[len] = '\0';
	return (ptr);
}
