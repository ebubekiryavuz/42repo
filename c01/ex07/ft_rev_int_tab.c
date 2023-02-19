/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyavuz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:23:54 by ebuyavuz          #+#    #+#             */
/*   Updated: 2023/02/04 16:24:05 by ebuyavuz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	havuz;

	i = 0;
	size--;
	while (i < size)
	{
		havuz = tab[i];
		tab[i] = tab[size];
		tab[size] = havuz;
		i++;
		size--;
	}
}
