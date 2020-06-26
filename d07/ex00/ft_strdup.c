/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 08:17:47 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/26 09:14:32 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
int i;
char *p;

i = 0;
while(src[i])
{
if(p != '\0')
{
p = (char *)malloc(src[i] + 1);
}
i++;
}
return src;
}
int main(void)
{
char *src;
char src2 [100] = "this text is going to src";
src = src2;
*ft_strdup("%s",*src);
return 0;
}
