#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	if (len < (unsigned int)ft_strlen((char *)s) - start)
		dst = malloc((len + 1) * sizeof(char));
	else
		dst = malloc((unsigned int)ft_strlen((char *)s) - start + 1);
	if (dst == 0)
		return (NULL);
	if (start >= (unsigned int)ft_strlen((char *)s))
		return (ft_strdup(""));
	ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}
