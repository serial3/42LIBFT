#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

/* int main(void)
{
	printf("%d \n", ft_isalnum('+'));
	printf("%d \n", isalnum('7'));
} */