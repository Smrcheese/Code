/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 07:53:35 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/10 00:58:34 by sezequie         ###   ########.fr       */
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
	unsigned int	ctd;
	unsigned int	ctd2;

	ctd = 0;
	ctd2 = 0;
	if (*to_find == '\0')
		return (str);
	while (str[ctd])
	{
		if (str[ctd] == to_find[ctd2])
		{
			while (to_find[ctd2])
			{
				if (to_find[ctd2] != str[ctd + ctd2])
					break ;
				ctd2++;
			}
			if (ctd2 == (unsigned int)ft_strlen(to_find))
				return (str + ctd);
			ctd2 = 0;
		}
		ctd++;
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