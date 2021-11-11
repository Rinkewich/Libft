/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 22:20:35 by fardath           #+#    #+#             */
/*   Updated: 2021/10/23 16:40:50 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;
	char	res;

	number = n;
	if (number < 0)
	{
		write (fd, "-", 1);
		number = number * (-1);
	}
	if (number <= 9)
	{
		res = number + '0';
		write(fd, &res, 1);
	}
	else
	{
		ft_putnbr_fd((number / 10), fd);
		res = number % 10 + '0';
		write(fd, &res, 1);
	}
}
