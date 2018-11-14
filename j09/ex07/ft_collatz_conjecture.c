/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 23:49:00 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/13 02:33:31 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int		i;

	i = 0;
	if (base == 0)
		return (0);
	if (base != 1)
	{
		i++;
		if (base % 2 == 0)
			return (i + ft_collatz_conjecture(base / 2));
		else
			return (i + ft_collatz_conjecture(3 * base + 1));
	}
	return (0);
}
