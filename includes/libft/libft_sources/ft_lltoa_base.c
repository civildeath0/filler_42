/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:45:37 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/09 19:46:04 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_lltoa_base(long long n, int base)
{
	char				*ascii;
	int					cb;
	unsigned long long	o;

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
