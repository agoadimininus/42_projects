/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:43:44 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/18 22:11:34 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new_str;
	if (start >= ft_strlen(s))
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	new_str = malloc(sizeof(size_t) * len + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s, len);
	return (new_str);
}
