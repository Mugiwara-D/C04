
#include <unistd.h>
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr,char *base)
{
	int i;
	int a;

	i = ft_strlen(base);
	char c[i];
	if (nbr <= i && nbr >= -i)
	{
		c[i] = base[nbr];
		ft_putstr(c);
	}
}


void	ft_putnbr(int nb)
{
	char a;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (nb * -1);
	}
	if (nb > 9 || nb < -9)
	{
		ft_putnbr(nb / 10);
		a = ((nb % 10) + '0');
		write(1, &a, 1);
	}
	else
	{
		a = nb + '0';
		write(1, &a, 1);
	}
}
int main()
{
	ft_putnbr_base(1,"0123456789");
}
