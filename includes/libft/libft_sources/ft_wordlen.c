/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 00:12:20 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/21 00:13:16 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordlen(char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str && *str != c)
	{
		++str;
		++count;
	}
	return (count);
}
