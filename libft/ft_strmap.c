/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:58:05 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/18 06:58:08 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		slen;
	char	*sout;

	if (s != NULL && f != NULL)
	{
		slen = (int)ft_strlen(s);
		if ((sout = (char *)malloc(sizeof(char) * (slen + 1))))
		{
			i = 0 - 1;
			while (++i < slen)
				*(sout + i) = f(*(s + i));
			*(sout + i) = '\0';
		}
	}
	else
		sout = NULL;
	return (sout);
}
