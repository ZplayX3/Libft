#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = s1[0];
	i = 0;
	if (ft_strlen((char *)s2) == 0)
		return ((char *)s1);
	if ((size_t)ft_strlen((char *)s2) > n)
		return (NULL);
	while (i < n && s1[i])
	{
		if (ft_strncmp((char *)&s1[i], s2, ft_strlen((char *)s2)) == 0)
		{
			if (i + ft_strlen((char *)s2) > n)
				return (NULL);
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
