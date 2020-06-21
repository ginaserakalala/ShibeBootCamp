/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 08:35:55 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/21 08:49:32 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_print_combn(int n)
{
	int i;
	i = 0;
	char a;
	char b;
	char c;
	a = 0;

	while(a < n)
	{

		b = 0;
		while(b < n)
		{
			c = 0;
			while(c < n)
			{
				a++;
				b++;
				c++;
				ft_putchar(n);
			}
		}

	}


