#include "libft.h"

int	is_in(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	end = 0;
	while (is_in(s1[i], set))
		i++;
	start = i;
	i = ft_strlen((char *)s1) - 1;
	while (is_in(s1[i], set))
		i--;
	end = i;
	return (ft_substr(s1, start, end - start + 1));
}