/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:19:13 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/22 14:01:57 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_iterative_power(int nb, int power)
{

	int result;

	result = 1;
	if(power < 0)
		return 0;
	while(result < power)     
	{
	result = result * nb;
	result++;
	}
	return result;
}
int main()
{
int a = 2;
int b  = 3;
int r;
ft_iterative_power(a,b);
printf("the value of power applied to a number is: %d\n",r);
return (0);
}


