/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:35:58 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/11 17:34:09 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = str;
	i = 0;
	while (i < len)
		*(ptr + i++) = c;
	return (str);
}
