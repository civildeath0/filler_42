/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 23:50:57 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/20 23:52:55 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmove(char *dest, char **src)
{
	char	*tmp;

	if (!src || !dest)
		return (NULL);
	tmp = *src;
	*src = dest;
	ft_freezero((void *)tmp, ft_strlen(tmp));
	return (dest);
}
