/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:48:30 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/22 19:59:12 by cbenoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int		ft_is_rect(char *buf, int ret, int *tab)
{
	int		k;
	int		j_memo;

	k = 0;
	j_memo = 0;
	tab[1] = 0;
	if (buf[0] == 'A' && buf[1] == '\0')
		return (ft_print1(3, 0));
	else
	{
		if (ft_count_x_y(0, ret, buf, tab) == 0)
			return (0);
	}
	if ((tab[0] <= 0 || tab[1] <= 0) && buf[0] != '\n')
		return (ft_print1(1, 0));
	else if (tab[0] == 1 && tab[1] > 1 && buf[0] == 'A' && buf[ret - 1] == 'C')
		return (ft_print1(2, tab));
	else if (tab[1] == 1 && tab[0] > 1 && buf[0] == 'A' && buf[ret - 1] == 'C')
		return (ft_print_compare(1, tab, 2));
	return (1);
}

char	*ft_malloc(int ret, char *buf, char *tmp)
{
	char str[ft_strlen(buf)];

	ft_strcpy(str, buf);
	if (buf == NULL && !(buf = malloc(sizeof(*buf) * ret)))
		return (NULL);
	else if (!(buf = malloc(sizeof(*buf) * (ft_strlen(buf) + ret))))
		return (NULL);
	buf = ft_strcat(buf, str);
	buf = ft_strcat(buf, tmp);
	return (buf);
}

int		ft_print_compare(int nb_colle, int *tab, int choix)
{
	if (choix == 1)
	{
		ft_putstr("[colle-0");
		ft_putnbr(nb_colle);
		ft_putstr("] [");
		ft_putnbr(tab[0]);
		ft_putstr("] [");
		ft_putnbr(tab[1]);
		ft_putstr("]\n");
		return (1);
	}
	else
	{
		ft_putstr("[colle-03] [");
		ft_putnbr(tab[0]);
		ft_putstr("] [1] || [colle-04] [");
		ft_putnbr(tab[0]);
		ft_putstr("] [1]\n");
		return (2);
	}
}

int		ft_compare(char *buf, int *tab)
{
	char	*str;

	if (!(str = malloc(sizeof(*str) * ((tab[0] + 1) * (tab[1] + 1)))))
		return (-1);
	rush00(tab[0], tab[1], str);
	if (ft_strcmp(str, buf) == 0)
		return (ft_print_compare(0, tab, 1));
	rush01(tab[0], tab[1], str);
	if (ft_strcmp(str, buf) == 0)
		return (ft_print_compare(1, tab, 1));
	rush02(tab[0], tab[1], str);
	if (ft_strcmp(str, buf) == 0)
		return (ft_print_compare(2, tab, 1));
	rush03(tab[0], tab[1], str);
	if (ft_strcmp(str, buf) == 0)
		return (ft_print_compare(3, tab, 1));
	rush04(tab[0], tab[1], str);
	if (ft_strcmp(str, buf) == 0)
		return (ft_print_compare(4, tab, 1));
	return (0);
}

int		main(void)
{
	int		tab[2];
	int		ret;
	char	*buf;
	char	buffer[BUF_SIZE];

	if (!(buf = malloc(sizeof(*buf))))
		return (0);
	while ((ret = read(0, buffer, BUF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		if ((buf = ft_malloc(ret, buf, buffer)) == NULL)
			return (0);
	}
	buf[ft_strlen(buf) - 1] = '\0';
	if (ft_is_rect(buf, ft_strlen(buf), tab) == 2)
		;
	else if (ft_is_rect(buf, ft_strlen(buf), tab) == 0)
		ft_putstr("aucune\n");
	else if (ft_compare(buf, tab) <= 0)
	{
		if ((ft_compare(buf, tab) == -1))
			return (0);
		ft_putstr("aucune\n");
	}
	return (0);
}
