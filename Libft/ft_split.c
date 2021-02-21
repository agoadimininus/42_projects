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

	sub_count = 0;
	if (!(sub_split = (char **)calloc((sub_count + 1), sizeof(char *))) || !s)
		return (NULL);
	sub_cpy = sub_split;
	i = 0;
	j = 0;
	while (*(s + j))
	{
		if (*s != c)
		{
			while (*(s + i) != c && *(s + i) != '\0')
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

static void            ft_print_tabstr(char **tabstr)
{
    printf("----------------------------------------------\n");
    int        i;

    i = 0;
    while (tabstr[i] != NULL)
    {
        printf("          -%s-\n",tabstr[i]);
        i++;
    }
    printf("----------------------------------------------\n");
}


static void            check_split(char *s, char c)
{
    char    **tabstr;

    if (!(tabstr = ft_split(s, c)))
        printf("NULL");
    else
        ft_print_tabstr(tabstr);
}

int                    main()
{
    int        arg;

    arg = 1;
    while (arg < 6 )
    {
        if (arg == 1)
            check_split("          ", ' ');

        else if (arg == 2)
            check_split("2 lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse   ", ' ');

        else if (arg == 3)
            check_split("3       lorem      ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');

        else if (arg == 4)
            check_split("4 lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi. i", 'i');

        else
            check_split("5 lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi. z", 'z');

        arg++;
    }
    return (0);

}
