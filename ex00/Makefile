# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/01 12:49:02 by yosherau          #+#    #+#              #
#    Updated: 2025/10/01 20:07:43 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	claptrap

CODEDIRS	=	.

CC			=	c++

INCDIRS		=	.

DEPFLAGS	=	-MP -MD

CFLAGS		=	-std=c++98 -Wall -Wextra -Werror $(foreach D, $(INCDIRS), -I$(D)) $(DEPFLAGS)

# SRCFILES	=	$(foreach D, $(CODEDIRS), $(wildcard $(D)/*.cpp))
SRCFILES	=	$(foreach D, $(CODEDIRS), $(wildcard *.cpp))

OBJDIR		=	obj

OBJECTS		=	$(patsubst %.cpp, $(OBJDIR)/%.o, $(SRCFILES))

DEPFILES	=	$(patsubst %.cpp, $(OBJDIR)/%.d, $(SRCFILES))

RM			=	rm -rf

all:			$(NAME)

$(NAME):		$(OBJECTS)
				$(CC) -o $@ $^


$(OBJDIR)/%.o:%.cpp
				mkdir -p $(OBJDIR)
				$(CC) $(CFLAGS) -c -o $@ $<


clean:
				$(RM) $(OBJDIR) $(DEPFILES)

fclean:			clean
				$(RM) $(NAME)

.PHONY:			all clean fclean
