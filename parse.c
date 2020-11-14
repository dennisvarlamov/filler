/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:45:03 by nglynis           #+#    #+#             */
/*   Updated: 2020/11/08 19:22:03 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			parse_player(t_filler *filler)
{
	char	*line;

	line = 0;
	while (get_next_line(0, &line))
	{
		if (ft_strstr(line, "nglynis.filler]"))
		{
			if (line[10] == '1')
			{
				filler->player_symbol = 'O';
				filler->enemy_symbol = 'X';
			}
			else if (line[10] == '2')
			{
				filler->player_symbol = 'X';
				filler->enemy_symbol = 'O';
			}
			free(line);
			return (0);
		}
		free(line);
	}
	free(line);
	free(filler);
	return (1);
}
