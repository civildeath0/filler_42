/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 00:23:37 by amaragre          #+#    #+#             */
/*   Updated: 2019/04/23 00:23:40 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	char	*hold;

	hold = str;
	*str = ft_toupper(*str);
	while (*(++str))
		*str = ft_tolower(*str);
	return (hold);
}
