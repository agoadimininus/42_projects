/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:13:53 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/19 00:16:45 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (haystack == needle || !needle)
		return ((char *)haystack);
	while (haystack[i] && i <= len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			if (!ft_strncmp(&haystack[i], needle, ft_strlen(needle)))
				return ((char *)haystack);
		}
		i++;
	}
	return (0);
}

