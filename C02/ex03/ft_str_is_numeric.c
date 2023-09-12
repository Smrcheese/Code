/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:21:27 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/12 15:27:20 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	i = 0;
	is_numeric = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9' )
		{
			is_numeric = 0;
			break ;
		}
		i++;
	}
	return (is_numeric);
}

/*
#include <stdio.h>
 
int main()
{
	char	str[] = "1234567890";

	printf("%d", ft_str_is_numeric(str));
	return (0);
}
*/