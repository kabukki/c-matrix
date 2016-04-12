##
## Makefile for Makefile in /home/le-rou_c/docs/108trigo/lib/matrix
## 
## Made by Lucien LE-ROUX
## Login   <le-rou_c@epitech.net>
## 
## Started on  Wed Mar  9 22:28:47 2016 Lucien LE-ROUX
## Last update Sat Mar 26 17:07:32 2016 Lucien LE-ROUX
##

NAME	=	libmatrix.a

SRC	=	src/cpy_mat.c	\
		src/del_mat.c	\
		src/disp_mat.c	\
		src/id_mat.c	\
		src/init_mat.c	\
		src/mat_m_mat.c	\
		src/mat_p_mat.c	\
		src/mat_pow.c	\
		src/mat_x_mat.c	\
		src/mat_x_n.c	\

INC	=	-I./include

CC	=	gcc $(INC)

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	@ ar rc $(NAME) $(OBJ)
	@ ranlib $(NAME)
	@ cp $(NAME) ..

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
