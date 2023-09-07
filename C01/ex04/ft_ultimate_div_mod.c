/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:23:35 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/07 17:36:49 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
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
	ft_ultimate_div_mod(ptr1, ptr2);
	return (0);
}
*/