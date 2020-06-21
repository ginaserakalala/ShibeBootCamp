#include <unistd.h>
char *ft_strrev(char *str)
{
	int rev;
	rev = 0;
	int len;
	len = str[rev];
	while(str[rev] != '\0')
	{
		str[rev] = len -1;
		--rev;
	}
	write(1,&rev,1);
	return (&str);
}
int main()
{
	ft_strrev("loop");
	return (0);
}

