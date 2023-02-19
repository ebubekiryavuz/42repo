/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyavuz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:42:33 by ebuyavuz          #+#    #+#             */
/*   Updated: 2023/02/16 16:42:53 by ebuyavuz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	num;

	num = nb;
	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (num >= 2)
	{
		while (i * i <= num)
		{
			if (i * i == num)
				return (i);
			i++;
		}
	}
	return (0);
}
