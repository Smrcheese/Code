/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 07:53:35 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/08 23:37:01 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	while (*str)
	{
		i = 0;
		while (to_find[i] == str[i])
		{
			i++;
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char str[200] = "i really like pizza do you like pizza aswell?";
	char to_find[200] = "pizza";
	char ch = ft_strstr(str, to_find);
	printf("result:\n%s", &ch);
}
