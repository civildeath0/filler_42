/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 00:27:40 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/23 01:08:59 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	**ft_lstpop(t_list **alst, t_list **begin_list)
{
	t_list	*scout;
	t_list	*trail;

	if (!begin_list || !alst)
		return (NULL);
	scout = *begin_list;
	while (scout != *alst && scout->next)
	{
		trail = scout;
		scout = scout->next;
	}
	if (scout != *alst)
		return (NULL);
	if (scout == *begin_list)
		*begin_list = scout->next;
	else
		trail->next = scout->next;
	return (alst);
}
