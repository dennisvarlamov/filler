/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:55:29 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/20 04:53:30 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*u_chr;

	u_chr = (unsigned char *)ft_memchr(src, c, n);
	if (u_chr)
	{
		ft_memcpy(dst, src, (size_t)(u_chr - (unsigned char *)src + 1));
		return ((void *)((unsigned char *)dst +
					(u_chr - (unsigned char *)src) + 1));
	}
	else
	{
		ft_memcpy(dst, src, n);
		return (NULL);
	}
}
