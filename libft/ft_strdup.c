#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*a;
	int		i;

	i = 0;
	a = (char *)malloc(sizeof(*src) * ft_strlen(src) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

/* int	main(void)
{
	char b[25] = "joseph";

	printf("teste: %s \n", ft_strdup(b));
} */