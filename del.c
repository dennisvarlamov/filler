/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 10:48:18 by nglynis           #+#    #+#             */
/*   Updated: 2020/11/08 19:24:34 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	del_board(t_board **board)
{
	int	y;

	y = 0;
	while (y < (*board)->height)
	{
		free((*board)->heat_map[y]);
		y++;
	}
	free((*board)->heat_map);
	free((*board));
	(*board) = NULL;
}

void	del_token(t_token **token)
{
	int	y;

	y = 0;
	while (y < (*token)->height)
	{
		free((*token)->map[y]);
		y++;
	}
	free((*token)->map);
	free((*token));
	(*token) = NULL;
}

void	reset_coords(t_filler *filler)
{
	filler->y = 0;
	filler->x = 0;
}
