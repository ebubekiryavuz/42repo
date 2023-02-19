/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebuyavuz <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:26:05 by ebuyavuz          #+#    #+#             */
/*   Updated: 2023/02/04 16:26:17 by ebuyavuz         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	havuz;
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			havuz = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = havuz;
			i = 0;
		}
		else
			i++;
	}
}
