#include <unistd.h>
int ft_strlen(char *str)
{
	int count;
	count = 0;
	while(str[count] != '\0')
	{

		++count;
	}
	write(1,&count,1);
	return (0);
}
int main()
{      
	char length;
	ft_strlen(&length);
	return(0);
}

