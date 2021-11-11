/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:07:28 by fardath           #+#    #+#             */
/*   Updated: 2021/10/18 16:07:29 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((i < n) && (str1[i] == str2[i]))
	{
		if (str1[i] == '\0' || i == (n - 1))
			break ;
		i++;
	}
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
