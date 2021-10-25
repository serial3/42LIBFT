#include <stdio.h>

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		ch -= 32;
	}
	return (ch);
}

/* int	main(void)
{
	char g = 'a';

	printf("teste: %c\n", ft_toupper(g));
} */