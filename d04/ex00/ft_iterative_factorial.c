/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:43:28 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/24 08:09:52 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
