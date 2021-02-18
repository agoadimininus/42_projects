/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:43:44 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/18 19:55:57 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if (start >= ft_strlen(s))
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	return (ft_strndup(s + start, len));
}
