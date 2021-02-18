/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 17:42:07 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/18 18:21:19 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (NULL);
	else
	{
		ptr = malloc(sizeof(nmemb * size));
		if (ptr == NULL)
			return (NULL);
		ft_bzero(ptr, nmemb * size);
		return(ptr);
	}
}
