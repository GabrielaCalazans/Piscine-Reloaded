#include<stdio.h>
#include<unistd.h>

int	*ft_range(int min, int max);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putnbrs(int *nb, int lin);

int	main()
{
	ft_putnbrs(ft_range(1191, -3977), -3977 - 1191);
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	ft_putnbrs(int *nb, int lin)
{
	while (--lin > 0)
	{
		ft_putnbr(*nb++);
		ft_putchar(' ');
	}
	
}
