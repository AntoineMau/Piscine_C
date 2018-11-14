* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:16:15 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/10 13:16:21 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(int argc, char **argv)
{
	printf("strlcat: %lu\n", strlcat(argv[1], argv[2], atoi(argv[3])));
	printf("dest: %s\n", argv[1]);
	printf("src: %s\n", argv[2]);
	printf("ft_strlcat: %d\n", ft_strlcat(argv[4], argv[5], atoi(argv[6])));
	printf("dest: %s\n", argv[4]);
	printf("src: %s\n", argv[5]);
}
