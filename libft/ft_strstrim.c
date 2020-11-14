/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 07:00:07 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/18 07:00:08 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstrim(char const *s, int splitter)
{
	size_t	s_i;
	size_t	s_begin;

	if (!s)
		return (NULL);
	s_i = 0;
	while (*(s + s_i) == (char)splitter)
		s_i++;
	s_begin = s_i;
	s_i = ft_strlen(s) - 1;
	if (s_begin != s_i + 1)
	{
		while (*(s + s_i) == (char)splitter)
			s_i--;
	}
	return (ft_strsub(s, (unsigned int)s_begin, s_i - s_begin + 1));
}
