# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joakoeni <joakoeni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/24 13:16:51 by joakoeni          #+#    #+#              #
#    Updated: 2023/03/28 13:43:42 by joakoeni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER		=	server_utils/server.c server_utils/lst_receive.c server_utils/sig_to_ascii.c server_utils/wrt_lst.c client_utils/go_top.c server_utils/freelst.c
CLIENT		=	client_utils/client.c client_utils/ascii_to_binary.c client_utils/do_lst.c client_utils/ft_strlen.c client_utils/go_top.c server_utils/freelst.c
PRINTF		=	printf/ft_printf.c printf/ft_c.c printf/ft_countdigit.c printf/ft_d.c printf/ft_itoa.c printf/ft_itoa_unsigned.c printf/ft_p.c printf/ft_s.c printf/ft_u.c printf/ft_x.c printf/ft_x_maj.c printf/ft_write.c

CC = @gcc 

FLAGS = -Wall -Werror -Wextra 

SERVER_NAME	=	server

CLIENT_NAME	=	client

PRINTF_SRC =	$(PRINTF)

PRINTF_OBJS =	$(PRINTF:.c=.o)

SERVER_SRC	=	$(SERVER)

SERVER_OBJS	=	$(SERVER_SRC:.c=.o)

CLIENT_SRC	=	$(CLIENT)

CLIENT_OBJS	=	$(CLIENT_SRC:.c=.o)

all:  $(SERVER_NAME) $(CLIENT_NAME)

server: $(SERVER_OBJS) $(PRINTF_OBJS)
	@$(CC) $(FLAGS) $(SERVER_OBJS) $(PRINTF_OBJS) -o $(SERVER_NAME)

client: $(CLIENT_OBJS) $(PRINTF_OBJS)
	@$(CC) $(FLAGS) $(CLIENT_OBJS) $(PRINTF_OBJS) -o $(CLIENT_NAME)

bonus: all

clean:
	@rm -rf $(SERVER_OBJS) $(CLIENT_OBJS) $(PRINTF_OBJS)

fclean:	clean
	@rm -rf $(CLIENT_NAME) $(SERVER_NAME)

re : fclean all