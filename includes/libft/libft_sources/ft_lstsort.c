/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 00:27:40 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/23 01:08:59 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsort(t_list **lst, int (*cmp)(void *, void *))
{
	t_list	*hold;
	t_list	*scout;
	t_list	*trail;

	scout = *lst;
	while (scout->next)
	{
		hold = scout;
		scout = scout->next;
		if (*lst == hold && cmp(hold->content, scout->content) > 0)
		{
			*lst = hold->next;
			hold->next = scout->next;
			scout->next = hold;
		}
		else if (!cmp(hold->content, scout->content))
		{
			trail->next = hold->next;
			hold->next = scout->next;
			scout->next = hold;
			scout = *lst;
		}
		else
			trail = hold;
	}
}
