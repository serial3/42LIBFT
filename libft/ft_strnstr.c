#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;

	i = ft_strlen(needle);
	if (i == 0)
		return ((char *)haystack);
	while (len >= i && ft_strlen(haystack) != 0)
	{
		len--;
		if (!ft_memcmp(haystack, needle, i))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

/* int	main(void)
{
	char *c = "car bar tar far";
	char *p = "tar";

	printf("%s \n", ft_strnstr(c, p, 5));
} */