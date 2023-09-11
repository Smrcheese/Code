/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:40:02 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/11 20:40:09 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	n = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}