/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebubekir <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:03:13 by ebubekir          #+#    #+#             */
/*   Updated: 2023/01/10 15:20:09 by ebubekir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_is_negative(int n)
{
	if(n >=  0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

int main(void)
{
	ft_is_negative(-8);
	ft_is_negative(0);
	ft_is_negative(8);
	return 0;
}
