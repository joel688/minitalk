/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:54:32 by joakoeni          #+#    #+#             */
/*   Updated: 2023/03/20 10:02:16 by joachimkoenig    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

int	ft_u(unsigned int ap)
{
	char	*res;
	int		i;

	res = ft_itoa_unsigned(ap);
	if (res == NULL)
		return (-2147483648);
	i = ft_s(res);
	free(res);
	return (i);
}
