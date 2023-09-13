/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 21:03:05 by sezequie          #+#    #+#             */
/*   Updated: 2023/09/13 13:02:53 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	if (index < n)
	{
		while (index < n)
		{
			dest[index] = '\0';
			index++;
		}
	}
	return (dest);
}

/*
int main()
{
	char dest[100];
	char src[] = "Hello World";

	ft_strncpy(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}
*/