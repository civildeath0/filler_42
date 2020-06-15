/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_structs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaragre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 21:53:13 by amaragre          #+#    #+#             */
/*   Updated: 2020/06/03 22:09:44 by amaragre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static void	delete_piece(t_piece *piece)
{
	int i;

	i = 0;
	while (i < piece->ysize)
		ft_strdel(&PIECE[i++]);
	free(PIECE);
	ft_bzero(piece, sizeof(t_piece));
}

static void	delete_place(t_fill *game, t_place *place)
{
	int i;

	i = 0;
	while (i < MAPYSIZE)
		free(place->heat_map[i++]);
	free(place->heat_map);
	ft_freezero(place, sizeof(t_place));
}

static void	new_map(t_fill *game)
{
	int i;

	i = 0;
	while (i < MAPYSIZE)
		ft_strdel(&MAP[i++]);
	free(MAP);
	if (!(MAP = ft_memalloc(sizeof(char *) * MAPYSIZE)))
		ft_exit_malloc_error();
	ft_bzero(MAP, sizeof(char *) * MAPYSIZE);
	game->counter = 0;
}

void		clean_structs(t_fill *game, t_piece *piece, t_place *place)
{
	delete_piece(piece);
	delete_place(game, place);
	new_map(game);
}
