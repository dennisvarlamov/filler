/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrnchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:59:39 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/18 06:59:40 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrnchr(const char *s, int c, size_t n)
{
	char	c_c;
	size_t	s_i;
	char	*res;

	c_c = (char)c;
	s_i = 0;
	res = NULL;
	while (*(s + s_i) != '\0' && s_i < n)
	{
		if (*(s + s_i) == c_c)
			res = (char *)(s + s_i);
		s_i++;
	}
	if (c_c == '\0')
		res = (char *)(s + s_i);
	return (res);
}
