/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebubekir <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:14:20 by ebubekir          #+#    #+#             */
/*   Updated: 2023/01/10 14:18:41 by ebubekir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char alphabet;
	alphabet = 'z';
	while(alphabet >= 'a')
	{
		ft_putchar(alphabet);
		alphabet--;
	}
}

int main (void)
{
	ft_print_reverse_alphabet();
	return(0);
}
