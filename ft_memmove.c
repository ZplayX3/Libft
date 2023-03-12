#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	i = n;
	if (!dest && !src)
		return (dest);
	if (s > d)
		ft_memcpy(d, s, n);
	else
	{
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
