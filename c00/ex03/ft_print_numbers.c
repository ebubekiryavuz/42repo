/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebubekir <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:21:17 by ebubekir          #+#    #+#             */
/*   Updated: 2023/01/10 14:39:10 by ebubekir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	char number;
	number = '0';
	while(number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}

int main (void)
{
	ft_print_numbers();
	return 0 ;
}
