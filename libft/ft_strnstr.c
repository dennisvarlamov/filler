/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:59:20 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/18 06:59:23 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	s_i;
	size_t	s_ih;
	size_t	needlelen;
	size_t	haystacklen;
	char	*res;

	s_i = 0;
	s_ih = 0;
	if (!(needlelen = ft_strlen(needle)))
		return ((char *)haystack);
	haystacklen = ft_strlen(haystack);
	while (s_ih < haystacklen && s_ih + s_i < len)
	{
		if (ft_strnchr(haystack + s_ih + s_i, *(needle + s_i), 1))
		{
			if (!s_i)
				res = ft_strnchr(haystack + s_ih, *needle, 1);
			if (++s_i == needlelen)
				return (res);
			continue;
		}
		s_i = 0;
		s_ih++;
	}
	return (NULL);
}
