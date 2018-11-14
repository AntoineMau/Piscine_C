/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 10:20:57 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/15 21:16:03 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_charcmp(char s1, char s2, int choix)
{
	int		i;

	if (choix == 0)
	{
		if (s1 != s2)
			return (0);
		return (1);
	}
	else
	{
		if (s1 == '\0' && s2 == '\0')
			return (1);
		else
			return (0);
	}
}

int		ft_nul(char *s2, int j)
{
	while (s2[j] == '*')
		j++;
	return (j);
}

int		match(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s2[j] == '*' && s1[i] == '\0')
		j++;
	while (s1[i] && s2[j])
	{
		j = ft_nul(s2, j);
		if (s2[j] == '\0')
			return (1);
		while (ft_charcmp(s1[i], s2[j], 0) == 0 && s2[j - 1] == '*')
		{
			i++;
			if (s1[i] == '\0')
				return (0);
		}
		if (ft_charcmp(s1[i], s2[j], 0) == 0)
			return (0);
		i++;
		j++;
	}
	j = ft_nul(s2, j);
	return (ft_charcmp(s1[i], s2[j], 1));
}
