/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebubekir <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:10:30 by ebubekir          #+#    #+#             */
/*   Updated: 2023/01/12 14:14:45 by ebubekir         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */#include <unistd.h>
#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int main (void)
{
	int	*nbr;
	int	number;

	nbr = &number;
	ft_ft(nbr);
	printf("%d", number);
}
