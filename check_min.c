/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_min.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 14:08:29 by nglynis           #+#    #+#             */
/*   Updated: 2020/11/08 19:26:58 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static int	calc_manhattan_dist(t_board *board, int x, int y)
{
	int	j;
	int	i;
	int	dist;
	int	min_dist;

	min_dist = INT_MAX;
	j = 0;
	while (j < board->height)
	{
		i = 0;
		while (i < board->width)
		{
			if (board->heat_map[j][i] == -2)
			{
				dist = abs(i - x) + abs(j - y);
				if (dist < min_dist)
					min_dist = dist;
			}
			i++;
		}
		j++;
	}
	return (min_dist);
}

void		calc_heat_map(t_board *board)
{
	int	x;
	int	y;

	y = 0;
	while (y < board->height)
	{
		x = 0;
		while (x < board->width)
		{
			if (board->heat_map[y][x] == 0)
				board->heat_map[y][x] = calc_manhattan_dist(board, x, y);
			x++;
		}
		y++;
	}
}
