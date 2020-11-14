/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:55:55 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/20 04:53:30 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*u_src;
	unsigned char	*u_dst;
	unsigned char	*u_tmp;

	u_src = (unsigned char *)src;
	u_dst = (unsigned char *)dst;
	if (u_dst == u_src || !len)
		return (dst);
	if (u_src + len < u_dst || u_src > u_dst + len)
		ft_memcpy(dst, src, len);
	else
	{
		if ((u_tmp = (unsigned char*)malloc(len)))
		{
			ft_memcpy(u_tmp, src, len);
			ft_memcpy(dst, u_tmp, len);
			free(u_tmp);
		}
	}
	return (dst);
}
