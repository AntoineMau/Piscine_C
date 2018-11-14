/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:54:01 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/17 17:45:44 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			ok = 0;
		}
		else
			ok++;
	}
}
