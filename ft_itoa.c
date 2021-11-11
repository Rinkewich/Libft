/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:04:07 by fardath           #+#    #+#             */
/*   Updated: 2021/10/23 17:08:04 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	size_n(long n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		n = n * (-1);
		size++;
	}
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	long	number;

	number = n;
	i = size_n(number);
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	result[i] = '\0';
	if (number == 0)
		result[0] = '0';
	if (number < 0)
	{
		result[0] = '-';
		number = number * (-1);
	}
	while (number > 0)
	{
		i--;
		result[i] = (number % 10) + '0';
		number = number / 10;
	}
	return (result);
}
