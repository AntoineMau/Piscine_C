/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:12:29 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/13 13:27:03 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int lenght)
{
	int		i;
	int		ok;
	int		tmp;

	i = 0;
	while (ok < lenght)
	{
		if (i + 1 == lenght)
			i = 0;
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			ok = 0;
		}
		else
			ok++;
		i++;
	}
	i = 0;
	return (tab[lenght - 1]);
}
