#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dst;
	unsigned int	i;

	i = 0;
	dst = ft_calloc(ft_strlen((char *)s) + 1, sizeof(char));
	if (dst == 0)
		return (NULL);
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	return (dst);
}
