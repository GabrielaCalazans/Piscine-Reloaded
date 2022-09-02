#include<string.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main()
{
	char *string1 = "Gabi";
	char *string2 = "Gabish";
	printf("%d\n", strcmp(string1, string2));
	printf("%d\n", ft_strcmp(string1, string2));

}