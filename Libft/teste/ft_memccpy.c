/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 18:23:03 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/15 18:53:37 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *ptr;
	unsigned char *ptr2;

	i = 0;
	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (n > 0)
	{
		while (i++ < n)
		{
			ptr[i] = ptr2[i];
			if (ptr[i] == (unsigned char)c)
				return (ptr[i + 1]);
		}
	}
	return (0);
}
