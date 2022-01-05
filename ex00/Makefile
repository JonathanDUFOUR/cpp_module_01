# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 05:10:30 by jodufour          #+#    #+#              #
#    Updated: 2022/01/05 06:37:21 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################################
#              COMMANDS              #
######################################
CXX				=	c++ -c
LINK			=	c++
MKDIR			=	mkdir -p
RM				=	rm -rf

######################################
#             EXECUTABLE             #
######################################
NAME			=	ex00.out

#######################################
#             DIRECTORIES             #
#######################################
SRC_DIR			=	./
OBJ_DIR			=	objs/

######################################
#            SOURCE FILES            #
######################################
SRC				=	\
					main.cpp		\
					newZombie.cpp	\
					randomChump.cpp	\
					Zombie.cpp

######################################
#            OBJECT FILES            #
######################################
OBJ				=	${SRC:.cpp=.o}
OBJ				:=	${addprefix ${OBJ_DIR}, ${OBJ}}

DEP				=	${OBJ:.o=.d}

#######################################
#                FLAGS                #
#######################################
CPPFLAGS		=	-Wall -Wextra -Werror
CPPFLAGS		+=	-std=c++98
CPPFLAGS		+=	-MMD -MP

LDFLAGS			=	

ifeq (${DEBUG}, 1)
	CPPFLAGS	+=	-g
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

.PHONY:	all clean fclean re fre
