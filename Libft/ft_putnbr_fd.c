/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:46:26 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/20 21:33:44 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long cst;

	cst = (long) n;
	if (cst < 0)
	{
		cst = -cst;
		ft_putchar_fd('-', fd);
	}
	if (cst > 9)
	{
		ft_putnbr_fd(cst / 10, fd);
		ft_putchar_fd((cst % 10) + '0', fd);
	}
	else
		ft_putchar_fd(cst + '0', fd);
}
