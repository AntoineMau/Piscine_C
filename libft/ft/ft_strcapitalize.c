/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 17:20:58 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/09 14:37:58 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		cap;

	i = 0;
	cap = 1;
	while (str[i])
	{
		if (cap == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (cap == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'))
			cap = 0;
		else
			cap = 1;
		i++;
	}
	return (str);
}
