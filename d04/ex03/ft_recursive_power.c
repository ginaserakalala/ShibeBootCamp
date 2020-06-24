/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:30:53 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/24 10:56:21 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{

	return 0;
else
	return(nb * ft_recursive_power(nb,power - 1));

		}
int main(void)
{
	printf("answer is %d\n:",ft_recursive_power(2,3));
	return 0;
}
