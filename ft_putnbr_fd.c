/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamedin <anamedin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:29:02 by anamedin          #+#    #+#             */
/*   Updated: 2024/02/16 18:50:01 by anamedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= (-1);
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(((n % 10) + '0'), fd);
	}
}
