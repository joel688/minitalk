/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_to_ascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:46:11 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/27 16:14:38 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	sig_to_ascii(int sig)
{
	static int	i = 0;
	static int	add = 1;
	static int	j = 0;

	if (sig == SIGUSR1)
	{
		add *= 2;
		j++;
	}
	if (sig == SIGUSR2)
	{
		i += add;
		add *= 2;
		j++;
	}
	if (j == 8)
	{
		j = 0;
		add = 1;
		lst_receive(i);
		i = 0;
	}
}
