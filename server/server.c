/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:04:17 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/27 17:03:35 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	server(void)
{
	int	pid;

	pid = getpid();
	if (pid < 0)
		exit(1);
	ft_printf("Server PID : %d \n", pid);
	ft_printf("Please send a message using ./client pid ""\n");
	signal(SIGUSR1, sig_to_ascii);
	signal(SIGUSR2, sig_to_ascii);
	while (1)
		pause();
	return ;
}

int	main(void)
{
	server();
}
