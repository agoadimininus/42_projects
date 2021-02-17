/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:05:49 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/17 17:35:10 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			dstlen;
	size_t			srclen;
	unsigned int	i;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (srclen);
	while (*dest != '\0' && i < size)
	{
		dest++;
		i++;
	}
	while (*src != '\0' && i < (size - 1))
	{
		*dest++ = *src++;
		i++;
	}
	if (size > dstlen && size != 0)
		*dest = '\0';
	if (dstlen >= size)
		return (size + srclen);
	return (dstlen + srclen);
}
