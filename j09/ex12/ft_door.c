/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:22:31 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/13 11:03:52 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int		close_door(t_door door)
{
	ft_putstr("Door closing...\n");
	door.state = CLOSE;
	return (TRUE);
}

int		open_door(t_door door)
{
	ft_putstr("Door opening...\n");
	door.state = OPEN;
	return (TRUE);
}

int		is_door_open(t_door door)
{
	ft_putstr("Door is open ?\n");
	return (door.state = OPEN);
}

int		is_door_close(t_door door)
{
	ft_putstr("Door is close ?\n");
	return (door.state = CLOSE);
}
