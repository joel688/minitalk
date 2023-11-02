/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:04:04 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/27 16:26:06 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	client(int pid, char *transfer)
{
	int		size;
	t_ctrl	*s;

	size = ft_strlen(transfer);
	s = do_lst(transfer, size);
	s->pid = pid;
	ascii_to_binary(s);
}

int	main(int argc, char **argv)
{
	int	pid;

	pid = 0;
	if (argc == 3)
	{
		pid = atoi(argv[1]);
		client(pid, argv[2]);
	}
	else
		ft_printf("Wrong use of client: ./client [pid] [message]\n");
}
