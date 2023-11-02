/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:54:37 by joachimkoen       #+#    #+#             */
/*   Updated: 2023/03/28 13:42:15 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <unistd.h>

typedef struct t_node
{
	unsigned char	c;
	int				ascii;
	struct t_node	*next;
	struct t_node	*prev;
}					t_node;

typedef struct t_ctrl
{
	struct t_node	*ctrl;
	int				pid;
}					t_ctrl;

int					ft_printf(const char *s, ...);
int					ft_c(int ap);
int					ft_s(char *ap);
int					ft_p(unsigned long long ap);
int					ft_d(int num);
int					ft_countdigit(unsigned long long ap);
int					ft_u(unsigned int ap);
int					ft_x_maj(unsigned int ap);
int					ft_x(unsigned int ap);
char				*ft_itoa(int n);
char				*ft_itoa_unsigned(unsigned int n);
int					ft_write(char *s);
void				go_top(t_ctrl *s);
void				ascii_to_binary(t_ctrl *s);
size_t				ft_strlen(const char *s);
t_ctrl				*do_lst(char *transfer, int size);
void				wrt_lst(t_ctrl *s);
void				lst_receive(unsigned char c);
void				sig_to_ascii(int sig);
void				client(int pid, char *transfer);
void				server(void);
void				freelst(t_ctrl *s);
void				freelstc(t_ctrl *s);

#endif