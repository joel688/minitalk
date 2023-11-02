/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:04:11 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/27 16:13:38 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

t_node	*new_node(unsigned char c)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->c = c;
	node->ascii = c;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_ctrl	*do_strct_ctrl(void)
{
	t_ctrl	*s;

	s = malloc(sizeof(t_ctrl));
	if (!s)
		return (NULL);
	s->ctrl = NULL;
	return (s);
}

t_ctrl	*do_lst(char *transfer, int size)
{
	int		i;
	t_node	*tmp;
	t_ctrl	*s;

	s = do_strct_ctrl();
	i = 0;
	s->ctrl = new_node(transfer[i++]);
	tmp = s->ctrl;
	while (i != size + 1)
	{
		s->ctrl->next = new_node(transfer[i++]);
		s->ctrl->next->prev = tmp;
		s->ctrl = s->ctrl->next;
		tmp = s->ctrl;
	}
	go_top(s);
	return (s);
}
