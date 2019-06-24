/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfetoua <elfetoua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:49:49 by elfetoua          #+#    #+#             */
/*   Updated: 2019/05/21 23:38:10 by elfetoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 77
# include <sys/types.h>
# include <sys/uio.h>
# define FD 4864
# include "libft/libft.h"

int					get_next_line(const int fd, char **line);
#endif
