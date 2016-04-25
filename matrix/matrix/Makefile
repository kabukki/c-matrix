##
## Made by Lucien LE-ROUX
## 
## Started on  Wed Mar  9 22:28:47 2016 Lucien LE-ROUX
## Last update Mon Apr 25 21:10:34 2016 Lucien LE-ROUX
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
