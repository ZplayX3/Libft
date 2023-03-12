int	ft_atoi(const char *nptr)
{
	int	nb;
	int	i;
	int	sign;

	i = 0;
	nb = 0;
	sign = 0;
	while (((8 <= nptr[i]) && (nptr[i] <= 13)) || (nptr[i] == 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = 1;
		i++;
	}
	while (('0' <= nptr[i]) && (nptr[i] <= '9'))
	{
		nb = nb * 10;
		nb = nb + (nptr[i] - 48);
		i++;
	}
	if (sign == 1)
		nb = -nb;
	return (nb);
}
