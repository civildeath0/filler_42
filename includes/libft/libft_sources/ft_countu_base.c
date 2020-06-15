/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countu_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:48:11 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/09 19:49:03 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countu_base(uintmax_t n, int base)
{
	size_t count;

	count = 0;
	if (base < 2)
		return (0);
	while (n / base != 0)
	{
		++count;
		n /= base;
	}
	return (++count);
}
