/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:16:09 by sezequie          #+#    #+#             */
/*   Updated: 2023/10/10 01:36:45 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = -1;
	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	while (++i < max - min)
		arr[i] = min + i;
	return (arr);
}
