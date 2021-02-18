/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnicolas <pnicolas@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:27:25 by pnicolas          #+#    #+#             */
/*   Updated: 2021/02/11 15:04:20 by pnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	size++;
	s = (char *)malloc(sizeof(char) * size);
	if (!s)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
