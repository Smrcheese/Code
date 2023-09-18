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
	char	*original_dest;

	original_dest = dest;
	while (*dest != '\0')
	{
		dest ++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (original_dest);
}

/*
#include <stdio.h>
int main()
{
	char dest[200] = "i really like pizza ";
	char src[200] = "do you like pizza aswell?";
	ft_strcat(dest, src);
	printf("result: \n%s", dest);
}
*/