
#include <unistd.h>
int ft_iterative_factorial(int nb)
{
	int factorial;
	factorial = 0;
	while(factorial < nb)
	{
		factorial = factorial * nb;
		factorial++;
	}
	return factorial;
	return 0;
}
int main()
{
int num;
	ft_iterative_factorial(5);
		return (0);
}
