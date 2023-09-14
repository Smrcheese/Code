/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:46:02 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/14 19:55:01 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

/*

ft_strcat is a function that appends one array to another
by taking two arguments, the first is the destination array
and the second is the source array
* /

#include <stdio.h>
int main()
{
	char dest[200] = "i really like pizza ";
	char src[200] = "do you like pizza aswell?";
	ft_strcat(dest, src);
	printf("result: \n%s", &dest);
}
*/