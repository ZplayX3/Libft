/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:22:09 by tlachman          #+#    #+#             */
/*   Updated: 2022/09/20 19:04:19 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	is_in(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_parts(char *str, char *charset)
{
	int	i;
	int	parts;

	parts = 0;
	i = 0;
	if ((is_in(str[i], charset) == 0) && (charset != 0))
		parts++;
	while (str[i])
	{
		if (!is_in(str[i + 1], charset) && is_in(str[i], charset) && str[i + 1])
			parts++;
		i++;
	}
	return (parts);
}

void	part_cpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while ((is_in(src[i], charset) == 0) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	part(char **res, char *str, char *charset)
{
	int	i;
	int	x;
	int	part;

	part = 0;
	i = 0;
	while (str[i])
	{
		if (is_in(str[i], charset) == 1)
		{
			i++;
		}
		else
		{
			x = 0;
			while ((is_in(str[i + x], charset) == 0) && str[i + x])
				x++;
			res[part] = (char *)malloc(sizeof(char) * (x + 1));
			part_cpy(res[part], str + i, charset);
			i = i + x;
			part++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		parts;

	parts = ft_parts(str, charset);
	res = (char **)malloc(sizeof(char *) * (parts + 1));
	res[parts] = 0;
	part(res, str, charset);
	return (res);
}
/*
int	main(int ac, char **av)
{
	int		i;
	char	**res;

	i = 0;
	(void)ac;
	res = ft_split(av[1], av[2]);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}
*/
