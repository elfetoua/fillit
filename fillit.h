/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <elfetoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 17:35:41 by elfetoua          #+#    #+#             */
/*   Updated: 2019/06/27 01:41:20 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "get_next_line.h"

#include <stdio.h>

typedef struct		s_bloc
{
	char            fill[4][5];
	struct s_bloc	*next;
}					t_bloc;

int		verification(char *file);
int     is_valid_form(t_bloc *head);
int 	validation(char	*stream, int i);
void	usage(void);
void	add(t_bloc *head, t_bloc *new);
t_bloc	*nd_creat(void);
