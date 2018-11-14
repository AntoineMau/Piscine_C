/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 17:38:31 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/23 17:41:37 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_o(int x, int y, char **buf)
{
	int		i;
	int		j;
	int		count_o;

	i = 0;
	count_o = 0;
	while (buf[i])
	{
		j = 0;
		while (buf[i][j])
		{
			if (buf[i][j] == 'o')
				count_o++;
			j++;
		}
		i++;
	}
	return (count_o);
}
