/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 08:10:20 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/07 17:36:18 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
	int a;
	int b;
	int div;
	int mod;
	int *ptr1;
	int *ptr2;
	int *ptr3;
	int *ptr4;

	a = 0;
	b = 1;
	div = 0;
	mod = 0;
	ptr1 = &a;
	ptr2 = &b;
	ptr3 = &div;
	ptr4 = &mod;
	ft_div_mod(*ptr1, *ptr2, ptr3, ptr4);
	return (0);
}
*/