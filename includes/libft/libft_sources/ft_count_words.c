/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:48:11 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/09 19:49:03 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			++str;
		if (*str && *str != c)
			++count;
		while (*str && *str != c)
			++str;
	}
	return (count);
}
