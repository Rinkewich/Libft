/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:02:01 by fardath           #+#    #+#             */
/*   Updated: 2021/10/21 21:53:43 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_str(char const *s, char c)
{
	int	num_str;

	num_str = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			num_str++;
			while (*s != c && *s)
				s++;
		}
	}
	return (num_str);
}

static char	**ft_free(char **str)
{
	 int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static void	ft_malloc_str(char **str, int num_str, char const *s, char c)
{
	int	i;
	int	j;
	int	num_char;

	i = 0;
	j = 0;
	while (j < num_str)
	{
		num_char = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			num_char++;
			i++;
		}
		str[j] = ft_substr(s, i - num_char, num_char);
		if (!str[j])
			ft_free(str);
		j++;
	}
	str[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		num_str;

	if (!s)
		return (NULL);
	num_str = ft_num_str(s, c);
	str = (char **)malloc((num_str + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	ft_malloc_str(str, num_str, s, c);
	return (str);
}
