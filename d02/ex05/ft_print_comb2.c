/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:46:19 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/19 15:40:53 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_comb2(void)
{
	char a;
	char b;
	char c;


	while(++a <= 99)
	{
		while(++b <= 99)
		{
			ft_putchar(a);
			ft_putchar(b);

			if(a < '8'|| b < '9')
			{
				ft_putchar(' ');
				ft_putchar(',');

			}
		}
	}
}
int main()
{
	ft_print_comb2();
	return (0);
}
