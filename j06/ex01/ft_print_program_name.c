/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:17:18 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/10 18:59:06 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;

	(void)argc;
	i = 0;
	while (argv[0][i])
		ft_putchar(argv[0][i++]);
	ft_putchar('\n');
	return (0);
}
