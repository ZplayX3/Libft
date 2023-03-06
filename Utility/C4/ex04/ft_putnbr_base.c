/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlachman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:35:02 by tlachman          #+#    #+#             */
/*   Updated: 2022/09/12 14:30:10 by tlachman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_putnbr_base(int nb, char *base)
{
	int			len;
	long int	nombre;

	len = ft_strlen(base);
	nombre = nb;
	if (valid_base(base) == 1)
	{
		if (nombre < 0)
		{
			ft_putchar('-');
			nombre = -nombre;
		}
		if (nombre >= len)
		{
			ft_putnbr_base(nombre / len, base);
			nombre = nombre % len;
		}
		if (nombre < len)
			ft_putchar(base[nombre]);
	}
}
/*
   int	main(int ac, char **av)
   {
   (void) ac;
   ft_putnbr_base(-2147483648, av[1]);
   }
   */
