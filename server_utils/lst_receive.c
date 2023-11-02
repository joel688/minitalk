/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_receive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:09:10 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/27 17:03:05 by joakoeni         ###   ########.fr       */
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

void	lst_receive(unsigned char c)
{
	t_node	*tmp;
	t_ctrl	*s;

	if (s == NULL)
	{
		s = do_strct_ctrl();
		s->ctrl = new_node(c);
		tmp = s->ctrl;
	}
	else
	{
		s->ctrl->next = new_node(c);
		s->ctrl->next->prev = tmp;
		s->ctrl = s->ctrl->next;
		tmp = s->ctrl;
	}
	if (c == '\0')
	{
		wrt_lst(s);
		tmp = NULL;
		s = NULL;
	}
}
