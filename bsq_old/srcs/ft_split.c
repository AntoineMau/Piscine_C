/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:56:28 by judumay           #+#    #+#             */
/*   Updated: 2018/07/20 13:56:32 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_words(char *str)
{
	int word;
	int space;
	int nb_words;
	int i;

	i = 0;
	nb_words = 0;
	word = 0;
	space = 1;
	while (str[i] != '\0')
	{
		if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') && !word)
		{
			word = 1;
			space = 0;
			nb_words++;
		}
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && !space)
		{
			word = 0;
			space = 1;
		}
		i++;
	}
	return (nb_words);
}

int		ft_beginning(int i, char *str, int tab[])
{
	int beg;

	beg = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			beg = i;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'
					&& str[i] != '\0')
				i++;
			tab[0] = i - beg;
			break ;
		}
		i++;
	}
	return (beg);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	int		tab[1];
	char	**string;

	i = 0;
	k = 0;
	string = (char**)malloc(sizeof(char*) * (ft_words(str) + 1));
	while (i < ft_words(str))
	{
		j = 0;
		k = ft_beginning(k, str, tab);
		string[i] = (char*)malloc(sizeof(char) * (tab[0] + 1));
		while (j < tab[0])
		{
			string[i][j] = str[k++];
			j++;
		}
		string[i][j] = '\0';
		i++;
	}
	string[i] = 0;
	return (string);
}
