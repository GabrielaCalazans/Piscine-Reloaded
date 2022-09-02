#include <stdio.h>

void	ft_swap(int *a, int *b);

int main()
{
	int var1;
	int var2;

	int *K;
	int *G;

	K = &var1;
	G = &var2;

	var1 = 3;
	var2 = 10;

	printf("%d %d ANTES SWAP\n", var1, var2);

	ft_swap(K, G);

	printf("%d %d DEPOIS SWAP\n", var1, var2);
		

}
