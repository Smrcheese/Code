/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:19:15 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/18 18:57:48 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		factorial = nb * ft_recursive_factorial(nb - 1);
	return (factorial);
}

/*
#include <stdio.h>
int main()
{
	int result;
	
	result = ft_recursive_factorial(10);
	printf("result: %d", result);
	return (0);
}
*/