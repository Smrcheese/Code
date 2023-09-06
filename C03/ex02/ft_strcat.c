/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 05:46:02 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/06 06:23:23 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (1)
	{
		if (dest[i] == '\0')
		{
			while (src[j] != '\0')
			{
				dest[i] = src[j];
				i++;
				j++;
			}
			return (dest);
		}
		i++;
	}
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