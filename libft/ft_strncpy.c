/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:58:38 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/20 04:53:30 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	s_i;

	s_i = 0;
	while (s_i < len && *(src + s_i))
	{
		*(dst + s_i) = *(src + s_i);
		s_i++;
	}
	while (s_i < len)
	{
		*(dst + s_i) = '\0';
		s_i++;
	}
	return (dst);
}
