# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 07:50:54 by jodufour          #+#    #+#              #
#    Updated: 2022/02/16 00:03:38 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################################
#              COMMANDS              #
######################################
CXX			=	c++ -c
LINK		=	c++
MKDIR		=	mkdir -p
RM			=	rm -rf

######################################
#             EXECUTABLE             #
######################################
NAME		=	ex03.out

#######################################
#             DIRECTORIES             #
#######################################
SRC_DIR		=	srcs/
OBJ_DIR		=	objs/
PRV_DIR		=	private/

######################################
#            SOURCE FILES            #
######################################
SRC			=	\
				${addprefix class/,	\
					HumanA.cpp		\
					HumanB.cpp		\
					Weapon.cpp		\
				}					\
				main.cpp

######################################
#            OBJECT FILES            #
######################################
OBJ			=	${SRC:.cpp=.o}
OBJ			:=	${addprefix ${OBJ_DIR}, ${OBJ}}

DEP			=	${OBJ:.o=.d}

#######################################
#                FLAGS                #
#######################################
CPPFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS	+=	-std=c++98
CPPFLAGS	+=	-MMD -MP
CPPFLAGS	+=	-I${PRV_DIR}

LDFLAGS		=	

ifeq (${DEBUG}, 1)
	CPPFLAGS	+=	-g
	CPPFLAGS	+=	-DDEBUG=1
endif

#######################################
#                RULES                #
#######################################
${NAME}: ${OBJ}
	${LINK} ${OBJ} ${LDFLAGS} ${OUTPUT_OPTION}

all: ${NAME}

-include ${DEP}

${OBJ_DIR}%.o: ${SRC_DIR}%.cpp
	@${MKDIR} ${@D}
	${CXX} ${CPPFLAGS} $< ${OUTPUT_OPTION}

clean:
	${RM} ${OBJ_DIR} ${NAME}

fclean:
	${RM} ${OBJ_DIR} ${NAME}

re: clean all

fre: fclean all

-include /home/jodufour/Templates/mk_files/coffee.mk

.PHONY: all clean fclean re fre
