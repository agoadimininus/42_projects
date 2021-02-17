/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:05:49 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/17 17:20:37 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	j = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = destlen;
	if (size <= destlen)
		return (srclen + size);
	if (size >= destlen)
	{
		while (*src && i < (size - 1))
			dest[i++] = src[j++];
		dest[i] = '\0';
	}
	return (destlen + srclen);
}
