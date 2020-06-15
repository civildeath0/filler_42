/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endspaces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:48:11 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/09 19:49:03 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_endspaces(char *str)
{
	size_t i;
	size_t ws;

	i = 0;
	while (ft_iswhitespace(str[i]))
		++i;
	ws = i;
	i = ft_strlen(str) - 1;
	if (ws <= i)
	{
		while (ft_iswhitespace(str[i--]))
			++ws;
	}
	return (ws);
}
