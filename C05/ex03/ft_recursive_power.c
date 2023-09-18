/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:38:36 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/18 18:58:01 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (n * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>
int main()
{
	int result;
	
	result = ft_recursive_power(2, 5);
	printf("result: %d", result);
	return (0);
}
*/