/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:02:36 by fardath           #+#    #+#             */
/*   Updated: 2021/10/21 18:21:42 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
	{
		return (NULL);
	}
	if (src > dst)
	{
		i = -1;
		while (i++, len > i)
			((char *)dst)[i] = ((const char *)src)[i];
	}
	else
	{
		while (len--)
		{
			((char *)dst)[len] = ((const char *)src)[len];
		}
	}
	return (dst);
}
