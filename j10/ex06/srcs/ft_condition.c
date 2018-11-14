/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:00:26 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/17 00:01:57 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_header.h"

int		ft_cond_op(char *operateur, int nb2)
{
	if ((operateur[0] == '+' || operateur[0] == '-' || operateur[0] == '*' ||
			operateur[0] == '/' || operateur[0] == '%') && operateur[1] == '\0')
	{
		if (operateur[0] == '/' && nb2 == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		else if (operateur[0] == '%' && nb2 == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
		else
			return (1);
	}
	else
	{
		ft_putstr("0\n");
		return (0);
	}
}

int		ft_condition(char *operateur, int nb2, int argc)
{
	if (ft_cond_op(operateur, nb2) == 0)
		return (0);
	if (argc != 4)
		return (0);
	return (1);
}
