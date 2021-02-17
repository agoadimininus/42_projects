/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:36:23 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/16 23:33:59 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ptrd;
	unsigned char *ptrs;
	size_t i;

	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	i = 0;
	if (ptrd < ptrs)
	{
		while ((int)--n >= 0)
			ptrd[n] = ptrs[n];
	}
	else
	{
		while (i < n)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	return (dest);
}
