/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebubekir <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:50:14 by ebubekir          #+#    #+#             */
/*   Updated: 2023/01/20 17:15:49 by ebubekir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}


void ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
	}
	if(nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if(nb < 10 )
	{
		ft_putchar(nb + 48 );
		return;
	}

	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}

void	ft_putnbr(int n);

int		main(void)
{
    printf(" (printed) should be 1");
    ft_putnbr(1);
    printf("\n (printed) should be 0");
    ft_putnbr(0);
    printf("\n (printed) should be -1");
    ft_putnbr(-1);
    printf("\n (printed) should be 2147483647");
    ft_putnbr(2147483647);
    printf("\n (printed) should be -21474836478");
    ft_putnbr(-2147483648);
    printf("\n");
    return (0);
}
