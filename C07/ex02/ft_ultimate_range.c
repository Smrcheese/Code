/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:15:56 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/17 14:19:15 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long int	i;
	int			*ptr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (i);
}
