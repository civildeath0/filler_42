/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_of.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 00:00:42 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/23 00:00:44 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power_of(int base, int power)
{
	int	pow;

	pow = 1;
	if (power < 0)
		return (0);
	while (power-- > 0)
		pow = pow * base;
	return (pow);
}
