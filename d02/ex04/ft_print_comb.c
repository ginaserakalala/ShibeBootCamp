/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:55:19 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/19 14:38:24 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c) ;
void ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0' - 1;
	while(++a <= '9')
	{
		b = a;
		while(++b < '9')
		{
			c = b + 1;  
			while(c < '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);

				if( a != '7' || b != '8' || c != '9')
				{
					ft_putchar(' ');
					ft_putchar(',');
				}
				c++;
			}

		}

	}
}

