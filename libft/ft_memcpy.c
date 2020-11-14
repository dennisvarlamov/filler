/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:55:44 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/20 04:53:30 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*u_src;
	unsigned char	*u_dst;

	u_src = (unsigned char *)src;
	u_dst = (unsigned char *)dst;
	if (u_src == u_dst)
		return (dst);
	while (n-- > 0)
		*(u_dst++) = *(u_src++);
	return (dst);
}
