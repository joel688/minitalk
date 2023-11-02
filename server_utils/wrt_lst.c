/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrt_lst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:05:38 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/27 16:06:46 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	wrt_lst(t_ctrl *s)
{
	go_top(s);
	while (s->ctrl->next != NULL)
	{
		write(1, &s->ctrl->c, 1);
		s->ctrl = s->ctrl->next;
	}
	go_top(s);
	freelst(s);
}
