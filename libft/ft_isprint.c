#include <unistd.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
	{
		return (c);
	}
	return (0);
}

/* int main(void)
{
	printf("%d", ft_isprint('D'));
} */