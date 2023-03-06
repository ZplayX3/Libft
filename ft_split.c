/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:24:45 by event             #+#    #+#             */
/*   Updated: 2023/03/06 12:50:42 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		parts;

	parts = ft_parts(s, c);
	res = (char **)malloc(sizeof(char *) * (parts + 1));
	res[parts] = 0;
	part(res, s, c);
	return (res);
}
