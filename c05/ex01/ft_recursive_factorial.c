/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyavuz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:39:21 by ebuyavuz          #+#    #+#             */
/*   Updated: 2023/02/16 16:39:34 by ebuyavuz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb > 0)
	{
		fact *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
		return (0);
	return (fact);
}
