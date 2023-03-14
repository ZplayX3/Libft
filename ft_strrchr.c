#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*x;

	x = NULL;
	i = 0;
	c %= 256;
	while (s[i] != 0)
	{
		if (s[i] == (unsigned char)c)
			x = (char *)s + i;
		i++;
	}
	if (!c)
		x = (char *)s + i;
	return (x);
}
