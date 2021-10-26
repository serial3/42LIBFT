#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = s1;
	str2 = s2;
	while (n--)
	{
		if (*str1++ != *str2++)
			return (*--str1 - *--str2);
	}
	return (0);
}

/* int	main(void)
{
	char *a = "gastro";
	char *b = "GASTRO";

	printf("%d \n", ft_memcmp(a, b, 5));
}
 */