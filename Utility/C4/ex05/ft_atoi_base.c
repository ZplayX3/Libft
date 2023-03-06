/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:56:54 by tlachman          #+#    #+#             */
/*   Updated: 2022/09/12 16:17:03 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	valid_base(char *str)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	len = ft_strlen(str);
	if ((len == 0) || (len == 1))
		return (0);
	while (str[i])
	{
		if (((8 <= str[i]) && (str[i] <= 13)) || (str[i] == 32))
			return (0);
		if ((str[i] == '+') || (str[i] == '-'))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_in(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			i2;
	long int	number;

	i = 0;
	i2 = 0;
	number = 0;
	if (!valid_base(base))
		return (0);
	while (((8 <= str[i]) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	i2 = i2 + i;
	while ((str[i2] == '-') || (str[i2] == '+'))
		i2++;
	while (ft_is_in(str[i2], base) != -1)
	{
		number = number * ft_strlen(base);
		number = number + ft_is_in(str[i2], base);
		i2++;
	}
	if (sign(str + i) == 0)
		number = number / -1;
	return (number);
}
/*
int	main(int ac, char **av)
{
	printf("%d\n", ft_atoi_base(" 234", av[1]));
}
*/
