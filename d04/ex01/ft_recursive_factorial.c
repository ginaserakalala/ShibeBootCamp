/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:55:57 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/24 09:38:09 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)	
{
	if(nb == 1)
		return 1;
	else if(nb > 0)
		return (nb * ft_recursive_factorial(nb -1));
	else
		return 0;
}
