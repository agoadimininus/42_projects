/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:43:44 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/21 00:04:57 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;

	if (start >= ft_strlen(s) || !s)
		return (NULL);
	if ((ft_strlen(s) - (start + 1) < len))
		len = ft_strlen(s) - (start + 1);
	new_str = (char *)malloc(sizeof(char) * len + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, (s + start), len + 1);
	return (new_str);
}
