/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:45:37 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/09 19:46:04 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*scout;

	if (new)
	{
		if (*alst)
		{
			scout = *alst;
			while (scout->next)
				scout = scout->next;
			scout->next = new;
		}
		else
			*alst = new;
	}
}
