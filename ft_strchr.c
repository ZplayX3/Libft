#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return ((char *)((unsigned long)(s + i) *(!c)));
}

/*
void	main()
{
	printf("%s \n", ft_strchr("teste", '\0'));
}
*/
