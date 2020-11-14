/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:58:58 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/18 06:59:00 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	s_i;

	if (s1 != NULL && s2 != NULL)
	{
		s_i = 0;
		while (*(s1 + s_i) && *(s2 + s_i) && s_i < n)
		{
			if (*(s1 + s_i) != *(s2 + s_i))
				return (0);
			s_i++;
		}
		if ((*(s1 + s_i) || *(s2 + s_i)) && s_i != n)
			return (0);
	}
	else if (s1 == NULL || s2 == NULL)
		return (0);
	return (1);
}
