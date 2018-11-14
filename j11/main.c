/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:34:13 by anmauffr          #+#    #+#             */
/*   Updated: 2018/07/25 19:09:28 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ft_list.h"
#include <stdio.h>

void	ft_list_reverse(t_list **begin_list);
void	ft_list_foreach(t_list *begin_list, void (*f)(void* ));
void	ft_list_clear(t_list **begin_list);
void	ft_list_push_back(t_list **begin_list, void  *data);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
t_list	*ft_list_push_params(int ac, char **av);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
t_list *ft_create_elem(void *data);

void	ft_printf(t_list *t)
{
	if (t == 0)
		return ;
	printf("%s\n", (char *)t->data);
	ft_printf(t->next);
}

void    printf_elt(void *d)
{
	printf("%s\n", (char *)d);
}

void    printf_elem(t_list *elem)
{
	printf("%s\n", (char *)elem->data);
}

int		ft_cmp(char *data1, char *data2)
{
	int		i;

	i = 0;
	while (data1[i] || data2[i])
	{
		if (data1[i] != data2[i])
			return (data1[i] - data2[i]);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	t_list *t;

	t = 0;
	t = ft_create_elem("hey");
	//ft_list_push_front(&t, "hey9");
	ft_list_push_back(&t, "hey");
	ft_list_push_back(&t, "hey1");
	ft_list_push_back(&t, "hey");
	//ft_list_push_front(&t, "hey");
	//ft_printf(t);
	//printf("List length: %d\n", ft_list_size(t));
	//printf("Last elt: %s\n", (char *)(ft_list_last(t)->data));

	//t_list *l = ft_list_push_params(ac, av);

	//ft_list_clear(&l);

	//printf("3th elem: %s\n\n", (char *)(ft_list_at(l, 2)->data));
	//printf("1th elem: %s\n\n", (char *)(ft_list_at(l, 0)->data));
	//printf("5th elem: %s\n\n", (char *)(ft_list_at(l, 9)->data));
	//ft_list_reverse(&l);

	//ft_list_foreach(l, &printf_elt);

	//ft_list_foreach_if(l, &printf_elt, "bonjour", &ft_cmp);

	ft_list_remove_if(&t, "hey", &ft_cmp);

	//printf_elem(ft_list_find(l, "bonjour", &ft_cmp));

	//ft_list_merge(&l, t);

	//ft_list_sort(&l, &ft_cmp);

	ft_printf(t);
	//ft_printf(l);

	return (0);
}
