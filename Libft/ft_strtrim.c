/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 00:26:47 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/21 00:52:00 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

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

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	if (!s1)
		return (NULL);
	while (s1 + start && ft_strrchr(set, *(s1 + start)))
		start++;
	if (start == (ft_strlen(s1) + 1))
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_strrchr(set, *(s1 + end)))
		end--;
	len = end - start + 1;
	return (ft_substr(s1, start, len));
}
