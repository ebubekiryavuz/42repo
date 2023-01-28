/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebubekir <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:13:23 by ebubekir          #+#    #+#             */
/*   Updated: 2023/01/20 22:27:59 by ebubekir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	
	if(nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648 ;
	}
	if(nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if(nb < 10)
	{
		ft_putchar(nb + 48);
		return; 
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	
}

int		main(void)
{
    ft_putnbr(-2147483648);
   
    return (0);
}









