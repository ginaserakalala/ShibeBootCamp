/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:19:07 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/18 10:38:06 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c);
void ft_print_alphabet(void)
{ 
	char letter;
	letter  = 'a';
	while(letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}


}










