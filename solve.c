/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:46:14 by nglynis           #+#    #+#             */
/*   Updated: 2020/11/08 18:27:22 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int			parse_token(t_token *token)
{
	int	y;

	if (!(token->map = (char **)ft_memalloc(sizeof(char *) * token->height)))
		return (1);
	y = 0;
	while (y < token->height)
	{
		if (get_next_line(0, &(token->map[y])) != 1)
			return (1);
		y++;
	}
	return (0);
}
