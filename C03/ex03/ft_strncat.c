/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 06:49:01 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/06 06:50:42 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (1)
	{
		if (dest[i] == '\0')
		{
			while (src[j] != '\0' && j < nb)
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

#include <stdio.h>
int main()
{
	char dest[200] = "i really like pizza ";
	char src[200] = "do you like pizza aswell?";
	ft_strcat(dest, src, 10);
	printf("result: \n%s", &dest);
}