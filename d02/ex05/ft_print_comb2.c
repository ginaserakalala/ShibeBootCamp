void ft_putchar(char c);
void ft_print_comb2(void)
{
	unsigned i,j;
	i = 0;
	while(i < 9)
	{
		j = 0;
		while(j < 9)
		{
			if(i != j && j!= i)
			{
				ft_putchar(i);
				j++;
				i++;
			}

		}
