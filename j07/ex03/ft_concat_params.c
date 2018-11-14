/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:40:02 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/16 17:37:59 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_compteur(char **argv)
{
	int		i;
	int		j;
	int		compteur;

	i = 1;
	compteur = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j++])
			compteur++;
		compteur--;
		i++;
	}
	return (compteur);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		h;
	int		compteur;
	char	*str;

	compteur = ft_compteur(argv);
	str = (char*)malloc(sizeof(*str) * (compteur + 1));
	h = 0;
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			str[h++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[h++] = '\n';
		i++;
	}
	return (str);
}
