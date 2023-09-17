/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 07:53:35 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/17 17:20:37 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && j < len)
		{
			if (j == len - 1)
				return (&str[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

/*int main()
{
	char a[] = "testing my string";
	char b[] = "";

	printf("%s", ft_strstr(a, b));
	return(0);
}*/