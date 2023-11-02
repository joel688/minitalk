/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_top.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:07:59 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/27 17:02:26 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	go_top(t_ctrl *s)
{
	while (s->ctrl->prev != NULL)
	{
		s->ctrl = s->ctrl->prev;
	}
}
