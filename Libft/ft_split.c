/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:46:51 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/20 19:37:53 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_subcount(char *s, char c)
{
	int		count;

	count = 0;
	if (!c || !s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			count++;
			while (*s != c)
				s++;
		}
	}
	return (count);
}

size_t		ft_strclen(char *s, char c)
{
	size_t i;

	i = 0;
	while (*s != '\0' && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char	**sub_split;
	char	**sub_cpy;
	int		sub_count;
	size_t	i;
	size_t	j;

	sub_count = ft_subcount((char *)s, c);
	if (!(sub_split = (char **)malloc((sub_count + 1) * sizeof(char *))) || !s)
		return (NULL);
	sub_cpy = sub_split;
	i = 0;
	j = 0;
	while (*(s + j))
	{
		if (*(s + j) != c)
		{
			while (*(s + j + i) != c && *(s + j + i) != '\0')
				i++;
			*sub_cpy++ = ft_substr(s, j, i);
			j += i - 1;
			i = 0;
		}
		j++;
	}
	sub_cpy = NULL;
	return (sub_split);
}
