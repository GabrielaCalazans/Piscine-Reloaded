#include <stdio.h>

void	ft_ft(int *nbr);

int main()
{
	int var;
	int *nbr;

	nbr = &var;
	var = 5;
	printf("%d", var);
	
	ft_ft(nbr);

	printf("%d", var);

}
