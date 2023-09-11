/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 01:50:30 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/11 16:28:01 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' \
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while ((str[i] == '-' || str[i] == '+') && (str[i + 1] == '-' \
			|| str[i + 1] == '+'))
		return (0);
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if ((str[i] < '0') || (str[i] > '9'))
		return (0);
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}
