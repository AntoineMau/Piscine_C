/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 13:30:33 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/09 12:43:25 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		tmp;

	tmp = 1;
	while (tmp * tmp <= nb)
	{
		if (tmp * tmp == nb)
			return (tmp);
		tmp++;
	}
	return (0);
}
