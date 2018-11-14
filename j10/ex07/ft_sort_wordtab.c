/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:42:38 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/17 17:46:24 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i])
		return (s1[i]);
	else if (s2[i])
		return (-s2[i]);
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		ok;
	int		argc;
	char	*tmp;

	i = -1;
	ok = 0;
	argc = 0;
	while (tab[argc++])
		;
	argc--;
	while (ok < argc && ++i != -1)
	{
		if (i + 1 == argc)
			i = 0;
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i] = tmp;
			ok = 0;
		}
		else
			ok++;
	}
}
