/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:04:50 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/07 17:35:48 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main()
{
	int a;
	int b;
	int *ptr1;
	int *ptr2;

	a = 0;
	b = 1;
	ptr1 = &a;
	ptr2 = &b;
	ft_swap(ptr1, ptr2);
	return (0);
}
*/