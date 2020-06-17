/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 15:48:17 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/17 16:29:15 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
	#include <unistd.h>	

    void ft_putchar(char c)
	{
		write(1,&c,1);
	}
    void ft_print_reverse_alphabet(void)
	{
		char letter;
		letter = 'z';
		while(letter >= 'a')
		{
			ft_putchar(letter);
			letter--;
		}

	}
 	
