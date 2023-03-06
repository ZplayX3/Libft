/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:56:54 by tlachman          #+#    #+#             */
/*   Updated: 2022/09/06 18:00:48 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isspace(char c)
{
	if ((c == ' ') || (c == '\n'))
		return (1);
	else if ((c == '\t') || (c == '\v'))
		return (1);
	else if ((c == '\f') || (c == '\r'))
		return (1);
	else
		return (0);
}

int	sign(char *str)
{
	int	sign;
	int	i;
	int	x;

	x = 0;
	i = 0;
	sign = 0;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			x++;
			i++;
		}
		else
			i++;
	}
	if (x % 2 == 0)
		sign = 1;
	else
		sign = 0;
	return (sign);
}		

int	ft_atoi(char *str)
{
	int	i;
	int	i2;
	int	number;

	i = 0;
	i2 = 0;
	number = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	i2 = i2 + i;
	while ((str[i2] == '-') || (str[i2] == '+'))
		i2++;
	while ((str[i2] >= '0') && (str[i2] <= '9'))
	{
		number = number * 10;
		number = number + str[i2] - 48;
		i2++;
	}
	if (sign(str + i) == 1)
		return (number);
	else
	{
		number = number / -1;
		return (number);
	}
}
/*
int	main(int ac, char **av)
{
	printf("%d\n", ft_atoi(av[1]));
}
*/
