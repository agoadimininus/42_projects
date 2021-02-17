/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:36:23 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/16 13:04:58 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptr;
	unsigned char *ptr2;
	unsigned char *tmp[n];
	size_t i;

	ptr = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (!ptr && !ptr2)
		return (0);
	if ((ptr2 < ptr) && (ptr < ptr2 + n))
	{
		i = n;
		while (i--)
			ptr[i] = ptr2[i];
	}
	else
	{
		while (i++ < n)
			ptr[i] = ptr2[i];
	}
	return (dest);
}
