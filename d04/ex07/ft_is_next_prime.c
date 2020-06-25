/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_next_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 08:22:33 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/25 08:23:11 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_next_prime(int nb)
{
	int res;

	res = 2;
	while (res <= nb/2)
	{
		++res;
		if (res % nb == 0)
		{
			break;
			return 0;
		}
	}
	if (res == nb)
		return ft_is_next_prime (res + 1);
}
