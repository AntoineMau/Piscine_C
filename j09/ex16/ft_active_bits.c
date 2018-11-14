/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:04:22 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/13 12:10:50 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int	i;

	i = 0;
	if (value < 0)
	{
		value = -value;
		i++;
	}
	while (value != 0)
	{
		if (value % 2 == 1)
			i++;
		value /= 2;
	}
	return (i);
}
