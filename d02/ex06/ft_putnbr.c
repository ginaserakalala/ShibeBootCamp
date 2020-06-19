#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_putnbr(int nb)
{
	char num;
	num = nb + '0';
	ft_putchar(num);
}
int main()
{
	int num = 42;
	char r;
	r = num + '0';
	ft_putnbr(r);
	return(0);
}
