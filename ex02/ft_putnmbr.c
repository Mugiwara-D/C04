#include <unistd.h>
void	ft_putnbr(int nb)
{
	char a;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (nb * -1);
	}
	if (nb > 9 || nb < -9 )	
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
	ft_putnbr(-123);
	return 0;
}
