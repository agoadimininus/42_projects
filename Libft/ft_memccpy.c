/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:23:03 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/16 22:42:13 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	unsigned char *ptr;
	unsigned char *ptr2;

	i = 0;
	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	while (i++ < n)
	{
		ptr[i] = ptr2[i];
		if (ptr[i] == (unsigned char)c)
			return (dest + i + 1);
	}
	return (0);
}
