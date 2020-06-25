/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:30:53 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/25 10:14:56 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if(nb == 1)
		return 1;
	else if(nb == 0)
		return 0;
	else
		return(nb * ft_recursive_power(nb,power - 1));

}
