/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <elfetoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 20:49:40 by elfetoua          #+#    #+#             */
/*   Updated: 2019/06/19 20:50:32 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_bloc	*nd_creat(void)
{
	t_bloc	*node;

	node = (t_bloc*)malloc(sizeof(t_bloc));
	if (!node)
		return (NULL);
	node->next = NULL;
	return (node);
}

void	add(t_bloc *head, t_bloc *new)
{
	while (head != NULL && head->next != NULL)
		head = head->next;
	head->next = new;
}