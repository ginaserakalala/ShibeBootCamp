/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 08:53:22 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/25 16:32:27 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' || i < n)
	{
		dest[i] = src[i];
		i++;
	}
	n = 0;
	while(i < n)
	{
		dest = '\0';
		i++;
	}
	return dest ;
}
