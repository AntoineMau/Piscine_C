/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 00:45:07 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/13 01:09:41 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = 0;
	while (to_find[size])
		size++;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == size - 1)
				return (1);
			j++;
		}
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	while (av[i])
	{
		av[i] = ft_strlowcase(av[i]);
		if (ft_strstr(av[i], "president") == 1)
			ft_putstr("Alert!!!\n");
		else if (ft_strstr(av[i], "attack") == 1)
			ft_putstr("Alert!!!\n");
		else if (ft_strstr(av[i], "bauer") == 1)
			ft_putstr("Alert!!!\n");
		i++;
	}
	return (0);
}
