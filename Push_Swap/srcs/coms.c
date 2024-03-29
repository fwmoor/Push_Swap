/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coms.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fremoor <fremoor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:27:55 by fwmoor            #+#    #+#             */
/*   Updated: 2019/09/02 08:41:49 by fremoor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int			swap(t_stack **stack, int p, char *s)
{
	int		i;
	t_stack	*temp;

	temp = *stack;
	if (temp && temp->next)
	{
		i = temp->val;
		temp->val = temp->next->val;
		temp->next->val = i;
		if (p == 1)
			ft_putendl(s);
		return (1);
	}
	return (0);
}

int			rotate(t_stack **stack, int p, char *s)
{
	t_stack	*first;
	t_stack	*last;

	if ((!*stack) || !(*stack)->next)
		return (0);
	first = *stack;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	last->next = first;
	first->prev = last;
	if (p == 1)
		ft_putendl(s);
	return (1);
}

int			rev_rotate(t_stack **stack, int p, char *s)
{
	t_stack	*last;
	t_stack	*prev;

	if ((!*stack) || !(*stack)->next)
		return (0);
	last = *stack;
	prev = NULL;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->prev = NULL;
	last->next = *stack;
	*stack = last;
	if (p == 1)
		ft_putendl(s);
	return (1);
}

int			push(t_stack **to, t_stack **from, int p, char *s)
{
	t_stack *temp;

	if (!*from)
		return (0);
	if (from != NULL)
	{
		temp = *from;
		if ((*from)->next)
			*from = (*from)->next;
		else
			*from = NULL;
		if (*from)
			(*from)->prev = NULL;
		if (to == NULL)
			head_add(to, temp);
		else if (to != NULL)
			head_add(to, temp);
		if (p)
			ft_putendl(s);
		return (1);
	}
	return (0);
}
