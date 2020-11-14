/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:58:14 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/18 06:58:16 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	slen;
	char			*sout;

	if (s != NULL && f != NULL)
	{
		slen = (unsigned int)ft_strlen(s);
		if ((sout = (char *)malloc(sizeof(char) * (slen + 1))))
		{
			i = 0 - 1;
			while (++i < slen)
				*(sout + i) = f(i, *(s + i));
			*(sout + i) = '\0';
		}
	}
	else
		sout = NULL;
	return (sout);
}
