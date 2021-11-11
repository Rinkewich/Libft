/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:57:11 by fardath           #+#    #+#             */
/*   Updated: 2021/10/19 19:50:40 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len_s1;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len_s1 = ft_strlen(s1) - 1;
	while (len_s1 && ft_strrchr(set, s1[len_s1]))
		len_s1--;
	str = ft_substr(s1, 0, len_s1 + 1);
	return (str);
}
