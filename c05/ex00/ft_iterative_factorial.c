/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyavuz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:38:26 by ebuyavuz          #+#    #+#             */
/*   Updated: 2023/02/16 16:38:42 by ebuyavuz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (fact);
}
