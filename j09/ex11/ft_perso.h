/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:03:16 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/13 10:20:22 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# define SAVE_THE_WORLD "sauveur de mondes"

# include <string.h>

typedef struct	s_perso
{
	int		age;
	float	life;
	char	*name;
	char	*profession;
}				t_perso;

#endif
