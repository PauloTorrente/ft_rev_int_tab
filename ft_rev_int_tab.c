/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paumoren <paumoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:28:24 by paumoren          #+#    #+#             */
/*   Updated: 2023/07/20 19:31:12 by paumoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;

	start = 0;
	size - 1;

	while (start < end)
	{
		int temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;

		start++;
		end--;
	}
}
