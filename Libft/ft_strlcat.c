/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:05:49 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/17 16:23:59 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t size)
{
	if (!dest || !src)
		return (0);
	while (*dest++ && size-- > 0)
		;
	while (*src && size-- > 0)
		*dest++ = *src++;
	*dest = '\0';
	return (ft_strlen(dest));
}
