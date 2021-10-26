#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
		a++;
	while (s[a] >= 0)
	{
		if (s[a] == (char)c)
			return ((char *)s + a);
		a--;
	}
	if (c == '\0')
		return ((char *)s + a);
	return (NULL);
}

/* int	main (void)
{
	const char *g = "carlos loples";

	printf("%s \n", ft_strrchr(g, 'l'));
} */