#include <stdio.h>

int	ft_tolower(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		ch += 32;
	}
	return (ch);
}

/* int	main(void)
{
	char g = '4';

	printf("teste: %c\n", ft_tolower(g));
} */