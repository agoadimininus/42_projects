/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:47:34 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/20 23:33:06 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	newstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (newstr == NULL)
		return (NULL);
	while (s1)
		*(newstr + i++) = *s1++;
	while (s2)
		*(newstr + i++) = *s2++;
	*(newstr + i) = '\0';
	return (newstr);
}
