/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:45:32 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/08 01:22:46 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		original;

	original = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = 1;
	while (i < power)
	{
		nb *= original;
		i++;
	}
	return (nb);
}
