#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	i = 0;
	int res;
	res = 0;
	while(str[i] != '\0')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return res;
}
int main()
{
	ft_atoi("hjjfg");
	return (0);
}

