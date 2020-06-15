/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 00:00:42 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/23 00:00:44 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(void const *str)
{
	unsigned char		*dup;
	unsigned const char	*str1;
	size_t				i;

	i = 0;
	if (!str)
		return (NULL);
	str1 = str;
	dup = (unsigned char *)malloc(sizeof(*dup) * (ft_strlen(str) + 1));
	if (!dup)
		return (NULL);
	while (i < ft_strlen(str))
	{
		dup[i] = str1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
