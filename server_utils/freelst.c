/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freelst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:37:37 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/27 16:32:17 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	freelst(t_ctrl *s)
{
	t_node	*z;

	go_top(s);
	z = s->ctrl;
	while (s->ctrl != NULL)
	{
		z = s->ctrl->next;
		free(s->ctrl);
		s->ctrl = z;
	}
	free(s);
}
