/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:59:34 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/18 06:59:35 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(const char *str)
{
	size_t	s_i;
	size_t	strlen;
	char	*res;

	if (!str)
		return (NULL);
	strlen = ft_strlen(str);
	if ((res = ft_strnew(strlen)))
	{
		s_i = strlen - 1;
		while (s_i < strlen)
			*(res++) = *(str + s_i--);
	}
	else
		return (NULL);
	return (res - strlen);
}
