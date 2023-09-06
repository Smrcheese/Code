/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 07:53:35 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/06 08:34:40 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		int	i;

		i = 0;
		while (to_find[i] == str[i])
		{
			i++;
    		if (to_find[i] == '\0')
    		{
    			return (char *)str;
    		}
		}
		str++;
	}
}

#include <stdio.h>
int main()
{
	char str[200] = "i really like pizza do you like pizza aswell?";
	char to_find[200] = "pizza";
	char ch = ft_strstr(str, to_find);
	printf("result:\n%s", &ch);
}
