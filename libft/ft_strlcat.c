/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:57:51 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/18 06:57:53 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_i;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= size)
		return (size + srclen);
	s_i = 0;
	while (s_i < srclen && dstlen + s_i < size - 1)
	{
		*(dst + dstlen + s_i) = *(src + s_i);
		s_i++;
	}
	*(dst + dstlen + s_i) = '\0';
	return (dstlen + srclen);
}
