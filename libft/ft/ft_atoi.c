/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 22:55:39 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/04 23:12:40 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		nb;
	int		nb_neg;
	int		i;

	nb = 0;
	nb_neg = 0;
	i = 0;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == ' ' || str[i] == '0')
		i++;
	if (str[i] == '-')
		nb_neg = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			nb = (nb * 10) + str[i] - '0';
			i++;
		}
	}
	if (nb_neg == 1)
		return (-nb);
	return (nb);
}
