/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cheseo <cheseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:11:48 by cheseo            #+#    #+#             */
/*   Updated: 2023/01/06 11:35:19 by cheseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

typedef struct s_node		t_node;
typedef struct s_my_list	t_my_list;

struct s_node
{
	void	*content;
	t_node	*prev;
	t_node	*next;
};

struct s_my_list
{
	int		len;
	t_node	*head;
	t_node	*tail;
};

size_t	ft_strlen(const char *s);

t_node	*create_node(void *content);
void	stack_add_front(t_my_list *list, t_node *new);
void	stack_add_back(t_my_list *list, t_node *new);
t_node	*stack_pop_front(t_my_list *list);
t_node	*stack_pop_back(t_my_list *list);

void	print_list(t_my_list *list);
void	free_list(t_my_list *list);

#endif