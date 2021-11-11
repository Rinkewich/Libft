/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fardath <fardath@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:28:02 by fardath           #+#    #+#             */
/*   Updated: 2021/10/24 16:34:48 by fardath          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*begin;

	if (lst)
	{
		while (*lst)
		{
			begin = (*lst)->next;
			ft_lstdelone((*lst), del);
			(*lst) = begin;
		}
	}
}
