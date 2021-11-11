/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:09:44 by fardath           #+#    #+#             */
/*   Updated: 2021/10/19 21:29:28 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(sizeof(char) + 1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (ft_strlen(s) > len)
		str = (char *)malloc(sizeof(*s) * (len + 1));
	else
		str = (char *)malloc(sizeof(*s) * (ft_strlen(s) - start + 1));
	if (str == NULL)
		return (NULL);
	while (s[start] && i < len)
		str[i++] = ((char *)s)[start++];
	str[i] = '\0';
	return (str);
}
