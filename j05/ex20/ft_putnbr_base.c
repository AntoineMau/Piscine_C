/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:46:53 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/12 00:09:04 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (j < i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return (str);
}

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

int		ft_verif_base(char *base)
{
	int		i;
	int		j;
	char	str[32];

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = 0;
		str[i] = base[i];
		while (j < i)
		{
			if (base[j] == str[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_conv_base(long nbr, char *str, char *base)
{
	int		i;
	int		nb_base;
	int		verif;
	int		k;

	i = 0;
	nb_base = 0;
	while (base[nb_base])
		nb_base++;
	while (nbr != 0)
	{
		k = 0;
		verif = 0;
		while (k != 1)
		{
			if (nbr % nb_base == verif)
			{
				str[i] = base[verif];
				i++;
				k++;
			}
			verif++;
		}
		nbr /= nb_base;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	int				quit;
	unsigned int	nbr_long;
	char			str[31];

	i = 0;
	nbr_long = 0;
	quit = ft_verif_base(base);
	while (base[i] && quit == 0)
	{
		if (base[i] == '+' || base[i] == '-')
			quit++;
		if (nbr < 0 && nbr_long == 0)
		{
			nbr_long = -nbr;
			ft_putchar('-');
		}
		i++;
	}
	if (quit == 0)
	{
		ft_conv_base(nbr_long, str, base);
		ft_strrev(str);
		ft_putstr(str);
	}
}
