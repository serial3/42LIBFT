#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (c);
	}
	return (0);
}

/* int main(void)
{
	printf("%d \n", ft_isdigit('1'));
	printf("%d \n", isdigit('5'));
} */