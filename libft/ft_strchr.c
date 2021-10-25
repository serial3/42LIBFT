#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] == (char)c)
			return ((char *)str + a);
		a++;
	}
	if (c == '\0')
		return ((char *)str + a);
	return (NULL);
}

/* int	main (void)
{
	const char *g = "carlos lopes";

	printf("%s \n", ft_strchr(g, 'r'));
} */