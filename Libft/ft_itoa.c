/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:45:57 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/20 22:25:40 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_intlen(long n)
{
	int		i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		len;
	long	ncpy;
	char	*str;

	ncpy = n;
	len = ft_intlen(ncpy);
	if (n < 0)
	{
		len++;
		ncpy *= -1;
	}
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	*(str + len--) = '\0';
	if (n == 0)
		*str = '0';
	while (ncpy)
	{
		*(str + len--) = (ncpy % 10) + '0';
		ncpy = ncpy / 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
