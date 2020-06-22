/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:43:28 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/22 11:51:54 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	while(factorial < nb)
	{
		factorial++;
		factorial = factorial * nb;
	}
	return factorial;

	return 0;
}
