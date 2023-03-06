/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 12:01:03 by tlachman          #+#    #+#             */
/*   Updated: 2022/09/08 21:15:25 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libc.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (i < n - 1))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char s1[] = "XYZ";
	char s2[] = "XYA";
	printf("%d\n", ft_strncmp(s1, s2, 3));	
	printf("%d\n", strncmp(s1, s2, 3));
}
*/
