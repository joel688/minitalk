/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ascii_to_binary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:58:40 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/27 17:02:13 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	conv_modulo_to_binary(int pid, int mod)
{
	if (mod != 0)
		kill(pid, SIGUSR2);
	else
		kill(pid, SIGUSR1);
}

void	conv_ascii_to_binary(t_ctrl *s, int ascii)
{
	int	i;

	i = 0;
	while (i != 8)
	{
		conv_modulo_to_binary(s->pid, ascii % 2);
		ascii /= 2;
		i++;
		usleep(300);
	}
}

void	ascii_to_binary(t_ctrl *s)
{
	int	i;
	int	pid;

	i = 0;
	pid = s->pid;
	while (s->ctrl->next != NULL)
	{
		conv_ascii_to_binary(s, s->ctrl->ascii);
		s->ctrl = s->ctrl->next;
	}
	while (i != 8)
	{
		kill(pid, SIGUSR1);
		usleep(300);
		i++;
	}
	go_top(s);
	freelst(s);
}
