/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 06:56:24 by nglynis           #+#    #+#             */
/*   Updated: 2020/01/20 04:53:30 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	int		sign;
	char	isintmin;

	if (fd < 0)
		return ;
	if (!(isintmin = 0) && n == FT_INT_MIN)
	{
		isintmin = 1;
		n = FT_INT_MIN / 10;
		sign = -1;
	}
	else
		sign = n >= 0 ? 1 : -1;
	if ((n *= sign) && sign == -1)
		ft_putchar_fd('-', fd);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
		n /= 10;
	}
	else
		ft_putchar_fd(n + '0', fd);
	if (isintmin)
		ft_putchar_fd(FT_INT_MIN_LASTCHAR, fd);
}
