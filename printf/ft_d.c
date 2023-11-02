/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:23:16 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/20 10:00:18 by joachimkoenig    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

static int	ft_count(long long int num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		i++;
		num *= -1;
	}
	if (num == 0)
		i++;
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

int	ft_d(int num)
{
	int		digit;
	char	*res;
	int		i;

	digit = ft_count(num);
	res = ft_itoa(num);
	if (res == NULL)
		return (-2147483648);
	i = ft_write(res);
	free(res);
	return (i);
}
