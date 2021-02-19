/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:47:09 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/19 10:47:20 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	set_len;
	size_t	newstr_len;
	size_t	i;
	size_t	n;
	size_t	newstr_i;
	char	*newstr;

	s1_len = ft_strlen(s1);
	newstr_len = s1_len;
	n = s1_len;
	i = 0;
	newstr_i = 0;
	set_len = ft_strlen(set);
	if (s1_len > set_len)
	{
		if (!ft_strncmp(s1, set, set_len))
		{
			newstr_len -= set_len;
			i += set_len;
		}
		if (!ft_strncmp(s1 + s1_len - set_len, set, set_len))
		{
			newstr_len -= set_len;
			n -= set_len;
		}
	}
	newstr = (char *)malloc(newstr_len + 1);
	if (newstr == NULL)
		return (NULL);
	while (i < n)
		*(newstr + newstr_i++) = *(s1 + i++);
	return (newstr);
}
