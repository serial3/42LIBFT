#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*temp;
	const char	*s;

	if (dst == 0)
		return (NULL);
	temp = dst;
	s = src;
	while (len--)
		*temp++ = *s++;
	return (dst);
}
