#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*x;

	i = 0;
	x = s;
	while ((i < n) && (x[i] != (unsigned char)c))
		i++;
	if (i < n && x[i] == (unsigned char)c)
		return ((void *)(x + i));
	return (NULL);
}
