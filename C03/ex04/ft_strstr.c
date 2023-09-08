/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 07:53:35 by sezequie          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/09/08 23:37:01 by sezequie         ###   ########.fr       */
=======
/*   Updated: 2023/09/07 17:05:42 by sezequie         ###   ########.fr       */
>>>>>>> 5352053c65d40069e0c747bc9c5c89e6d3356894
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	ctd2;

	ctd2 = 0;
	while (str[ctd2] != '\0')
		ctd2++;
	return (ctd2);
}

char	*ft_strstr(char *str, char *to_find)
{
<<<<<<< HEAD
	int	i;

	while (*str)
	{
		i = 0;
		while (to_find[i] == str[i])
		{
			i++;
			if (to_find[i] == '\0')
				return (str);
=======
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
>>>>>>> 5352053c65d40069e0c747bc9c5c89e6d3356894
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