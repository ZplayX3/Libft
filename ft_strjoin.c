#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*s3;

	i = 0;
	s3 = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (s3 == 0)
		return (NULL);
	ft_strlcpy(s3, s1, ft_strlen((char *)s1) + 1);
	while (s1[i])
		i++;
	ft_strlcpy(s3 + i, s2, ft_strlen((char *)s2) + 1);
	return (s3);
}
