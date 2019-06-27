/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <elfetoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 21:06:22 by elfetoua          #+#    #+#             */
/*   Updated: 2019/06/27 05:58:09 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_check_arround(char tab[4][5], int i, int j)
{
	int sides_counter;

	sides_counter = 0;
	if (i != 3 && tab[i + 1][j] == '#')
		sides_counter++;
	if (i != 0 && tab[i - 1][j] == '#')
		sides_counter++;
	if (j != 3 && tab[i][j + 1] == '#')
		sides_counter++;
	if (j != 0 && tab[i][j - 1] == '#')
		sides_counter++;
	return (sides_counter);

}

int	no_error(char tab[4][5])
{
	int i;
	int j;
	int sides_counter;

	i = 0;
	j = 0;
	sides_counter = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tab[i][j] == '#')
				sides_counter += ft_check_arround(tab, i, j);
			j++;
		}
		i++;
	}
	return((sides_counter == 6 || sides_counter == 8) ? 1 : 0);
}

int     is_valid_form(t_bloc *head)
{
	while (head)
	{
		if (!no_error(head->fill))
			return (0);
		head = head->next;
	}
	return (1);
}