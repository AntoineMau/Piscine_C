/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:45:34 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/13 12:01:16 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verif(int *tab, int lenght)
{
	int		i;

	i = 0;
	while (i < lenght)
	{
		if (tab[i] == tab[i + 1])
			i += 2;
		else
			return (tab[i]);
	}
	return (0);
}

int		ft_unmatch(int *tab, int lenght)
{
	int		i;
	int		ok;
	int		tmp;

	i = 0;
	ok = 0;
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
	return (verif(tab, lenght));
}
