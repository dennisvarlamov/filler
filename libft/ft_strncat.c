/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:58:21 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/20 04:53:30 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	s1len;
	size_t	s2len;
	size_t	s_i;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	s_i = 0;
	while (s_i < s2len && s_i < n)
	{
		*(s1 + s1len + s_i) = *(s2 + s_i);
		s_i++;
	}
	*(s1 + s1len + s_i) = '\0';
	return (s1);
}
