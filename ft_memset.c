#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*x;

	x = s;
	i = 0;
	while (i < n)
	{
		x[i] = c;
		i++;
	}
	return (s);
}
