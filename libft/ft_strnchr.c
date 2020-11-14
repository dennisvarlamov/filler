/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:58:27 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/20 04:53:30 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnchr(const char *s, int c, size_t n)
{
	char	c_c;
	size_t	i;

	c_c = (char)c;
	i = 0;
	while (*(s + i) != '\0' && i < n)
	{
		if (*(s + i) == c_c)
			return ((char *)(s + i));
		i++;
	}
	if (c_c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
