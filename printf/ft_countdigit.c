/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:42:37 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/20 10:00:04 by joachimkoenig    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	ft_countdigit(unsigned long long ap)
{
	int	len;

	len = 0;
	if (ap == 0)
		len++;
	while (ap > 0)
	{
		ap /= 16;
		len++;
	}
	return (len + 2);
}
