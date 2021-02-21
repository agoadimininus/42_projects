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
#include <stdio.h>


size_t		ft_subcount (char *s, char c)
{
	int	count;

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
	int		sub_count;
	int		i;
	int		sub_len;
	char	*cst_s;

	cst_s = (char *)s;
	i = 0;
	sub_len = 0;
	sub_count = 0;
	sub_count = ;
	if (c == '\0' || *cst_s == '\0' || !sub_count || s == NULL)
		return (NULL);
	sub_split = (char **)malloc(sizeof(char *) * (sub_count + 1));
	if (sub_split == NULL)
		return (NULL);
	while (*cst_s || i < sub_count)
	{
		while (*cst_s == c && *cst_s)
		{
			cst_s++;
		}
		if (i < sub_count && *cst_s)
		{
			sub_len = ft_strclen(cst_s, c) + 1;
			sub_split[i] = (char *)malloc(sizeof(char) * sub_len);
			if 	(&sub_split[i][0] == NULL)
				return (NULL);
			ft_strlcpy(&sub_split[i][0], cst_s, sub_len);
			i++;
		}
		while (*cst_s != c && *cst_s)
		{
			cst_s++;
		}
	}
	return (&sub_split[0]);
}
