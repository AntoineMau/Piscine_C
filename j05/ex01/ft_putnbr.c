/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 22:24:17 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/08 22:49:46 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_nb_neg(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		return (-nbr);
	}
	else
		return (nbr);
}

void	ft_putnbr(int nbr)
{
	int		nb_chiffre;
	int		test;
	int		i;

	if (nbr == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		nbr = ft_nb_neg(nbr);
		test = nbr;
		nb_chiffre = 0;
		while (test > 9 && ++nb_chiffre)
			test /= 10;
		while (nb_chiffre > 0)
		{
			i = 0;
			test = 1;
			while (i++ < nb_chiffre)
				test *= 10;
			ft_putchar(((nbr - nbr % test) / test) + 48);
			nbr -= test * ((nbr - nbr % test) / test);
			nb_chiffre--;
		}
		ft_putchar(nbr + 48);
	}
}
