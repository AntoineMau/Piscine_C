/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 23:30:31 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/03 09:32:38 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_3putchar(char c1, char c2, char c3)
{
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(c3);
}

void	ft_print_comb(void)
{
	int		centaine;
	int		dixaine;
	int		unite;

	centaine = '0';
	while (centaine <= '7')
	{
		dixaine = centaine + 1;
		while (dixaine <= '8')
		{
			unite = dixaine + 1;
			while (unite <= '9')
			{
				ft_3putchar(centaine, dixaine, unite);
				if (!(centaine == '7' && dixaine == '8' && unite == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				unite++;
			}
			dixaine++;
		}
		centaine++;
	}
}
