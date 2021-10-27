#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*t;

	if (b == 0)
		return (NULL);
	t = b;
	while (len--)
	{
		*t++ = c;
	}
	return (b);
}

/* int	main(void)
{
	char *a = "abcdefghi";

	printf("%p \n", ft_memset(a, '.', 3));
}
 */