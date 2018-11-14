/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:10:20 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/11 16:56:56 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_words(char *str)
{
	int		i;
	int		word;
	int		nb_words;

	i = 0;
	word = 0;
	nb_words = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			word = 0;
		else if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'
				&& word++ == 0)
			nb_words++;
		i++;
	}
	return (nb_words);
}

int		ft_letters(char *str, int find_words)
{
	int		i;
	int		letters;
	int		word;
	int		nb_words;

	i = 0;
	word = 0;
	nb_words = 0;
	letters = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			word = 0;
		else if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'
				&& word++ == 0)
			nb_words++;
		if (nb_words == find_words)
			letters++;
		i++;
	}
	return (letters - 1);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**string;

	string = (char**)malloc(sizeof(*string) * (ft_words(str) + 1));
	i = 0;
	k = 0;
	while (i < ft_words(str))
	{
		j = 0;
		string[i] = (char*)malloc(sizeof(char) * (ft_letters(str, i + 1) + 1));
		while (str[k] == ' ' || str[k] == '\t' || str[k] == '\n')
			k++;
		while (str[k] != ' ' && str[k] != '\t' && str[k] != '\n' && str[k])
			string[i][j++] = str[k++];
		string[i][j] = '\0';
		k++;
		i++;
	}
	string[i] = 0;
	return (string);
}
