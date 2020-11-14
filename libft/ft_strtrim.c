/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 07:01:18 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/18 07:01:19 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	s_i;
	size_t	s_begin;
	char	*str;

	if (!s)
		return (NULL);
	s_i = 0;
	while (ft_isspace(*(s + s_i)))
		s_i++;
	s_begin = s_i;
	s_i = ft_strlen(s) - 1;
	if (s_begin != s_i + 1)
	{
		while (ft_isspace(*(s + s_i)))
			s_i--;
	}
	str = ft_strsub(s, (unsigned int)s_begin, s_i - s_begin + 1);
	return (str);
}
