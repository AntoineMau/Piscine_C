/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 15:08:16 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/08 00:27:40 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		largueur_etage(int i)
{
	if (i == 0)
		return (7);
	return (largueur_etage(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2))));
}
void	sastantua(int size)
{
	int		i;
	int		ligne_etage = 3;

	i = 0;
	while (i < size)
	{
		ft_print(size, ligne_etage);
		i++;
		ligne_etage++;
	}
}

int main(int argc, const char *argv[])
{
	if (argc <= 1)
		return (0);
	sastantua(atoi(argv[1]));
	return 0;
}
