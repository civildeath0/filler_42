/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 00:29:48 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/23 00:29:51 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstcat(t_list **alst, t_list *new)
{
	t_list *scout;

	if (*alst && new)
	{
		scout = *alst;
		while (scout->next != NULL)
			scout = scout->next;
		scout->next = new;
	}
	else
		*alst = new;
}
