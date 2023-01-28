/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebubekir <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 01:32:36 by ebubekir          #+#    #+#             */
/*   Updated: 2023/01/14 01:45:00 by ebubekir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_strlen(char *str)
{
	int i;
	
	i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}


int main (void)
{
	char *c = "tugba";
	printf("%d", ft_strlen(c));
}
