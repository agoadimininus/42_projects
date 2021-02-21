/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:47:34 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/19 18:29:38 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		s1_len;
	int		s2_len;
	int		i;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	newstr = (char *)malloc(s1_len + s2_len + 1);
	if (newstr == NULL)
		return (NULL);
	if (s1)
		*(newstr + i++) = *s1++;
	if (s2)
		*(newstr + i++) = *s2++;
	*(newstr + i) = '\0';
	return (newstr);
}
