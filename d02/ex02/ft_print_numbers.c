/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 08:41:09 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/18 08:56:09 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c);
void ft_print_numbers(void)
{
char numbers;
numbers = '0';
while(numbers <= '9')
{
ft_putchar(numbers);
numbers++;
}

}
