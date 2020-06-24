/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 14:32:57 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/24 16:09:55 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if(index < 0)
		return (-1);
	else if(index == 0)
		return 0;
	else if(index == 1)
		return 1;
	return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}



