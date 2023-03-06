/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:24:45 by event             #+#    #+#             */
/*   Updated: 2023/03/06 14:20:13 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

int	ft_parts(char *s, char c)
{
	int	i;
	int	parts;

	parts = 0;
	i = 0;
	if (s[i] != c)
		parts++;
	while (s[i])
	{
		if ((s[i + 1] != c) && (s[i] == c) && s[i + 1])
			parts++;
		i++;
	}
	return (parts);
}
void	part_cpy(char *dst, char *src, char c)
{
	int	i;

	i = 0;
	while ((src[i] != c) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}
void	part(char **res, char *s, char c)
{
	int	i;
	int	x;
	int	part;

	part = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			x = 0;
			while ((s[i + x] != c) && s[i + x])
				x++;
			res[part] = (char *)malloc(sizeof(char) * (x + 1));
			part_cpy(res[part], s + i, c);
			i = i + x;
			part++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		parts;

	parts = ft_parts((char *)s, c);
	res = (char **)malloc(sizeof(char *) * (parts + 1));
	res[parts] = 0;
	part(res, (char *)s, c);
	return (res);
}
