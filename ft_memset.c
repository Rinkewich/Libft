/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:03:54 by fardath           #+#    #+#             */
/*   Updated: 2021/10/18 16:03:55 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int val, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		((char *)str)[i] = (char)val;
		i++;
	}
	return (str);
}
