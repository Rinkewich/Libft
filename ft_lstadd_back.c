/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:50:40 by fardath           #+#    #+#             */
/*   Updated: 2021/10/24 16:16:37 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (lst)
	{
		if (*lst)
		{
			end = ft_lstlast(*(lst));
			end->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}
