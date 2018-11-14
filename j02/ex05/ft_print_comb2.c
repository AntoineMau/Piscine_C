/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 02:58:10 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/04 19:10:14 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2_partie_2(int *nb1, int *nb2, int *tmp)
{
	while (nb2[1] <= '9' && *tmp == 0)
	{
		ft_putchar(nb1[0]);
		ft_putchar(nb1[1]);
		ft_putchar(' ');
		ft_putchar(nb2[0]);
		ft_putchar(nb2[1]);
		if (!(nb1[0] == '9' && nb1[1] == '8' && nb2[0] == '9' && nb2[1] == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		else
			tmp++;
		nb2[1]++;
	}
}

void	ft_print_comb2(void)
{
	int		nb1[2];
	int		nb2[2];
	int		tmp;

	nb1[0] = '0';
	tmp = 0;
	while (nb1[0] <= '9' && tmp == 0)
	{
		nb1[1] = '0';
		while (nb1[1] <= '9' && tmp == 0)
		{
			nb2[0] = nb1[0];
			while (nb2[0] <= '9' && tmp == 0)
			{
				if (nb1[0] == nb2[0])
					nb2[1] = nb1[1] + 1;
				else
					nb2[1] = '0';
				ft_print_comb2_partie_2(nb1, nb2, &tmp);
				nb2[0]++;
			}
			nb1[1]++;
		}
		nb1[0]++;
	}
}
