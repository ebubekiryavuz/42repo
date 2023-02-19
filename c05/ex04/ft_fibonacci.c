/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyavuz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:41:17 by ebuyavuz          #+#    #+#             */
/*   Updated: 2023/02/16 16:41:27 by ebuyavuz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (0 == index)
		return (0);
	if (1 == index)
		return (1);
	if (0 > index)
		return (-1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
