/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 15:48:17 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/17 16:10:36 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
	#include <unistd.h>	

    void ft_putchar(char c)
	{
		write(1,&c,26);
	}
    void ft_print_reverse_alphabet(void)
	{
		char letter;
		letter = 'z';
		while(letter > 'a')
		{
			ft_putchar(letter);
			letter++;
		}

	}
 	int main()
	{
		ft_print_reverse_alphabet();
		return 0;
    } 
