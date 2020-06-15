/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 17:01:55 by amaragre          #+#    #+#             */
/*   Updated: 2020/06/06 00:51:01 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	print_map(t_fill *game)
{
	int	i;
	int	j;

	j = 0;
	while (j < MAPYSIZE)
	{
		i = 0;
		while (i < MAPXSIZE)
		{
			if (ft_isalpha(MAP[j][i]))
			{
				if (ft_tolower(MAP[j][i]) == game->player)
					fprintf(stderr, GREEN);
				else
					fprintf(stderr, RED);
			}
			fprintf(stderr, "%c" RESET, MAP[j][i]);
			++i;
		}
		fprintf(stderr, "\n");
		++j;
	}
	sleep(1);
}
