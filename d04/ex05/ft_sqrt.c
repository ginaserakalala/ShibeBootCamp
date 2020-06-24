/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 16:13:14 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/24 17:03:02 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
	if(nb < 0)
		return -1;
	else if(nb == 0)
		return 0;
	else if(nb == 1)
	return (ft_sqrt(nb/2));
}
int main(void)
{
	printf("square root is %d \n: ", ft_sqrt(6));
	return (0);
}



