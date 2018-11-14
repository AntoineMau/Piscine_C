/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:23:15 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/13 11:02:04 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H

# define FT_DOOR_H

# include <unistd.h>

# define TRUE 1
# define OPEN 1
# define CLOSE 0

typedef struct	s_door
{
	int		state;
}				t_door;

#endif
