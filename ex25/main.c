#include<unistd.h>
void ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int nb);

typedef	void	(*funptr)(char);
void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

int main()
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2};

	ft_foreach(tab, 3, &ft_putnbr);
	ft_putchar('\n');
	ft_foreach(tab, 10, &ft_putnbr);
	ft_putchar('\n');
	//void (*f)(char); isso é a mesma coisa que fiz no typedef o efeito é o mesmo
	//funptr	f; isso por causa do typedef

	//f = &ft_putchar;
	//f('z');
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
	}
	ft_putnbr(nb % 10);
}
