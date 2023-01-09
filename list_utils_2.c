/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:22:32 by cheseo            #+#    #+#             */
/*   Updated: 2023/01/06 15:39:11 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "linked_list.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		i++;
		n++;
	}
	return (n);
}

void	print_list(t_my_list *list)
{
	t_node	*tmp;

	tmp = list->head;
	while (tmp)
	{
		write(1, (char *)tmp->content, ft_strlen((char *)tmp->content));
		tmp = tmp->next;
	}
}

void	free_list(t_my_list *list)
{
	t_node	*cur;
	t_node	*tmp;

	cur = list->head;
	while (cur)
	{
		tmp = cur->next;
		free(cur->content);
		free(cur);
		cur = tmp;
	}
	free(list);
}
