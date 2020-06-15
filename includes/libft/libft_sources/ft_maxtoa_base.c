/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxtoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 00:27:40 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/23 01:08:59 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_maxtoa_base(intmax_t n, int base)
{
	char				*ascii;
	int					cb;
	uintmax_t			o;

	if (2 > base || base > 16)
		return (NULL);
	cb = ft_count_base(n, base);
	if (!(ascii = ft_strnew(cb)))
		return (NULL);
	ascii[cb] = '\0';
	o = n;
	if (n < 0)
	{
		o *= -1;
		if (base == 10)
			ascii[0] = '-';
	}
	while (o / base)
	{
		ascii[--cb] = ft_base_char(o % base);
		o /= base;
	}
	ascii[--cb] = ft_base_char(o % base);
	return (ascii);
}
