/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:30:40 by fardath           #+#    #+#             */
/*   Updated: 2021/10/18 18:30:44 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	tmp = (char *)s;
	i = ft_strlen(s);
	while (i != -1)
	{
		if (tmp[i] == (unsigned char)c)
			return (&tmp[i]);
		i--;
	}
	return (NULL);
}
