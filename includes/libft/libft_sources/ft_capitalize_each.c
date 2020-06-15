/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize_each.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:48:11 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/09 19:49:03 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_capitalize_each(char *str)
{
	char	*hold;

	hold = str;
	*str = ft_toupper(*str);
	while (*(++str))
	{
		if (*(str - 1) == ' ' || *(str - 1) == '\t' || *(str - 1) == '-')
			*str = ft_toupper(*str);
		else
			*str = ft_tolower(*str);
	}
	return (hold);
}
