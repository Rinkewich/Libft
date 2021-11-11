/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:38:24 by fardath           #+#    #+#             */
/*   Updated: 2021/10/18 21:17:15 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*place;

	place = (size_t *)malloc(size * count);
	if (place == NULL)
		return (NULL);
	if (place)
		ft_memset(place, '\0', count * size);
	return (place);
}
