/* ************************************************************************** */
/* */
/*  :::::::::::*/
/*ft_strncmp.c:+::+: :+:*/
/* +:+ +:++:+  */
/*By: cfico-vi <cfico-vi@student.42sp.org.br> +#+  +:+ +#+  */
/*+#+#+#+#+#++#+  */
/*Created: 2021/02/12 19:41:37 by cfico-vi #+# #+# */
/*Updated: 2021/02/16 21:27:18 by cfico-vi###########.fr */
/* */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i) && i < (int)n - 1)
		i++;
	if (n)
		return (*((unsigned char*)s1 + i) - *((unsigned char *)s2 + i));
	return (0);
}

#include <stdio.h>
#include <string.h>

int main () {
	char str1[15];
	char str2[15];
	int ret;
	int ret1;

	strcpy(str1, "test\200");
	strcpy(str2, "test\0");
	ret = strncmp(str1, str2, 6);
	ret1 = ft_strncmp(str1, str2, 6);
	printf("ret = %d and ret1 = %d", ret, ret1);
	return(0);
}
