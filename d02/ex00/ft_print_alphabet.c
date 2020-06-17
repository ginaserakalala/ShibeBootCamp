void ft_putchar(char c);
void ft_print_alphabet(void)
{
	char letter;
	letter  = 'a';
	while(letter <= 'z')
	{
		letter++;
		ft_putchar(letter);
	}
	return 0;
}
