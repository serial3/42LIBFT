#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c);
	}
	return (0);
}

/* int main(void)
{
	printf("%d", ft_isalpha('C'));
} */