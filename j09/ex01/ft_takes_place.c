/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:43:12 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/12 18:03:13 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.");
	else if (hour < 12)
		printf("%d.00 A.M. AND %d.00 A.M.", hour, hour + 1);
	else
		printf("%d.00 P.M. AND %d.00 P.M.", hour - 12, hour - 11);
	printf("\n");
}
