/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:51:45 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/18 06:51:49 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isascii_str(char const *s)
{
	int	i;
	int	slen;

	slen = (int)ft_strlen(s);
	i = 0;
	while (i < slen)
	{
		if (!ft_isascii((int)(*(s + i))))
			return (0);
		i++;
	}
	return (1);
}
