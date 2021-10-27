#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		a;
	int		k;

	if (s1 == 0)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new == 0)
		return (NULL);
	a = 0;
	while (s1[a] != '\0')
	{
		new[a] = s1[a];
		a++;
	}
	k = -1;
	while (s2[++k] != '\0')
		new[a + k] = s2[k];
	new[a + k] = '\0';
	return (new);
}

/* int	main(void)
{
	char *g = "canto";
	char *q = "tanto";

	printf("%s \n", ft_strjoin(g, q));
	free(g);
}
 */