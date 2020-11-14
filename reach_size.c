/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reach_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:23:02 by nglynis           #+#    #+#             */
/*   Updated: 2020/11/08 18:25:31 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	get_size(char *line, int *height, int *width)
{
	while (!ft_isdigit(*line))
		line++;
	while (ft_isdigit(*line))
		*height = *height * 10 + *(line++) - '0';
	while (!ft_isdigit(*line))
		line++;
	while (ft_isdigit(*line))
		*width = *width * 10 + *(line++) - '0';
}

int		parse_board_size(t_board *board)
{
	char	*line;

	line = 0;
	while (get_next_line(0, &line))
	{
		if (ft_strstr(line, "Plateau"))
		{
			get_size(line, &board->height, &board->width);
			free(line);
			return (0);
		}
		free(line);
	}
	free(line);
	return (1);
}

int		parse_token_size(t_token *token)
{
	char *line;

	line = 0;
	while (get_next_line(0, &line))
	{
		if (ft_strstr(line, "Piece"))
		{
			get_size(line, &token->height, &token->width);
			free(line);
			return (0);
		}
		free(line);
	}
	free(line);
	return (1);
}
