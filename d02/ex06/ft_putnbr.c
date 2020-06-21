/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 08:57:30 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/21 08:51:55 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_putnbr(int nb)
{

	if(nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if(nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);	 
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

