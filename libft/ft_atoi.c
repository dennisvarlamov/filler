/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:50:44 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/20 04:53:30 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	res;
	long	sign;
	long	border;

	border = FT_LONG_MAX / 10;
	res = 0;
	while (ft_isspace(*str))
		++str;
	sign = ((*str == '-') ? -1 : 1);
	if (*str == '+' || *str == '-')
		++str;
	while (ft_isdigit(*str))
	{
		if (sign == 1 && (res > border ||
					(res == border && *str > FT_INT_MAX_LASTCHAR)))
			return ((int)FT_LONG_MAX);
		if (sign == -1 && (res > border ||
					(res == border && *str > FT_INT_MIN_LASTCHAR)))
			return ((int)FT_LONG_MIN);
		res = res * 10 + (*str - '0');
		++str;
	}
	return ((int)(sign * res));
}
