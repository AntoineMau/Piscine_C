/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:56:57 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/10 14:31:44 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i])
		return (s1[i]);
	else if (s2[i])
		return (-s2[i]);
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		i;
	int		ok;
	char	*tmp;

	i = 1;
	ok = 0;
	while (ok < argc && argc > 2)
	{
		if (i + 1 == argc)
			i = 1;
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = tmp;
			ok = 0;
		}
		else
			ok++;
		i++;
	}
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
