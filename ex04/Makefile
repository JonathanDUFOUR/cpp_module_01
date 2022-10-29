# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 08:55:56 by jodufour          #+#    #+#              #
#    Updated: 2022/10/29 08:06:00 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################################
#              COMMANDS              #
######################################
CXX			=	clang++
LINK		=	clang++
MKDIR		=	mkdir -p
RM			=	rm -rf

######################################
#             EXECUTABLE             #
######################################
NAME		=	replace.out

#######################################
#             DIRECTORIES             #
#######################################
SRC_DIR		=	srcs
OBJ_DIR		=	objs

######################################
#            SOURCE FILES            #
######################################
SRC			=	\
				main.cpp

######################################
#            OBJECT FILES            #
######################################
OBJ			=	${SRC:.cpp=.o}
OBJ			:=	${addprefix ${OBJ_DIR}/, ${OBJ}}

DEP			=	${OBJ:.o=.d}

#######################################
#                FLAGS                #
#######################################
CXXFLAGS	=	-c
CXXFLAGS	+=	-Wall -Wextra -Werror
CXXFLAGS	+=	-Wshadow
CXXFLAGS	+=	-std=c++98
CXXFLAGS	+=	-MMD -MP

LDFLAGS		=	

ifeq (${DEBUG}, 1)
	CXXFLAGS	+=	-g
	CXXFLAGS	+=	-DDEBUG=1
endif

#######################################
#                RULES                #
#######################################
.PHONY: all clean fclean re fre

${NAME}: ${OBJ}
	${LINK} $^ ${LDFLAGS} ${OUTPUT_OPTION}

all: ${NAME}

-include ${DEP}

${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp
	@${MKDIR} ${@D}
	${CXX} $< ${CXXFLAGS} ${OUTPUT_OPTION}

clean:
	${RM} ${OBJ_DIR} ${NAME} vgcore.* *.replace

fclean:
	${RM} ${OBJ_DIR} ${NAME} vgcore.* *.replace

re: clean all

fre: fclean all

-include ${HOME}/Templates/mk_files/coffee.mk
