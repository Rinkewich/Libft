/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:04:05 by fardath           #+#    #+#             */
/*   Updated: 2021/10/18 16:04:06 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*tmp;

	tmp = (char *)s;
	i = ft_strlen(s);
	j = 0;
	while (j <= i)
	{
		if (tmp[j] == (char)c)
			return (&tmp[j]);
		j++;
	}
	return (NULL);
}
