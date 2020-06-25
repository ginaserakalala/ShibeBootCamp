/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:43:28 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/25 09:57:53 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int factorial;
	int loop;

	factorial = 1;
	loop = 1;
	if (nb < 0)
		return 0;
	while (loop < nb)
	{
		++loop;
		factorial = factorial * loop;
	}
	return factorial;
}
int main(void)
{
	ft_iterative_factorial(3);
	printf("Factorial number is : %d\n",ft_iterative_factorial(3));
	return 0;
}
