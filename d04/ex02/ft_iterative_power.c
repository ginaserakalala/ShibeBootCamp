/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:19:13 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/22 14:21:16 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

