#include <stdio.h>

int	ft_sqrt(int nb);

int main()
{
	printf("%d\n", ft_sqrt(-4));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(10));
	printf("%d\n", ft_sqrt(144));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(0));
	return (0);
}
