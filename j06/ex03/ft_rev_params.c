/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:35:47 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/06 13:41:28 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
