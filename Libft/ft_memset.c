/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:35:58 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/02/11 13:13:06 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = str;
	i = 0;
	while (i < len)
		*(ptr + i++) = c;
	return (str);
}

int main ()
{
	char str[50];
	strcpy (str, "This string");
	ft_memset(str, 'B', 4);
	puts(str);
}
