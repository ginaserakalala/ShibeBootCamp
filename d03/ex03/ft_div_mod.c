
void	 ft_div_mod(int a, int b, int *div, int *mod)
{
	a = 4;
	b = 2;
	int res;
	int res2;
	*div = a / b;
	*mod =a % b;
	res = *div;
	res2 = *mod;
	write(1,&res,1);
	write(1,&res2,1);
}
