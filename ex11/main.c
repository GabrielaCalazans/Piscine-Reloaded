#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int var1;
	int var2;
	int *div;
	int *mod;

	div = &var1;
	mod = &var2;

	var1 = 50;
	var2 = 5;
	printf("%i  %i ANTES DIV MOD\n", *div, *mod);

	ft_div_mod(31, 6, div, mod);
	
	printf("%i  %i DEPOIS DIV MOD\n", *div, *mod);



}
