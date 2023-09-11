/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:16:09 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/11 22:16:40 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * (max - min));
	if (range == 0)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}