/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_umaxtoa_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 00:12:20 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/21 00:13:16 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_umaxtoa_base(uintmax_t n, int base)
{
	char				*ascii;
	int					cb;

	if (2 > base || base > 16)
		return (NULL);
	cb = ft_countu_base(n, base);
	if (!(ascii = ft_strnew(cb)))
		return (NULL);
	ascii[cb] = '\0';
	while (n / base)
	{
		ascii[--cb] = ft_base_char(n % base);
		n /= base;
	}
	ascii[--cb] = ft_base_char(n % base);
	return (ascii);
}
