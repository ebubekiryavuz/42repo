/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebubekir <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:54:46 by ebubekir          #+#    #+#             */
/*   Updated: 2023/01/20 16:07:03 by ebubekir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putstr(char *str)
{
	
	
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;
		
	}
}

int		main(void)
{
	char str[] = "Hello, world!";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}
