/*
** Made by Lucien LE-ROUX
** 
** Started on  Wed Mar  9 16:33:51 2016 Lucien LE-ROUX
** Last update Fri Mar 18 22:42:32 2016 Lucien LE-ROUX
*/

#ifndef MATRIX_H_
# define MATRIX_H_

#include <stdlib.h>
#include <stdio.h>

#define MAT_H dim[0]
#define MAT_W dim[1]

typedef struct  s_matrix
{
  double        *mat;
  int           dim[2];
}               t_matrix;

t_matrix	init_mat(int height, int width, char** values);
t_matrix	id_mat(int dim);
t_matrix	mat_p_mat(t_matrix *m1, t_matrix *m2);
t_matrix	mat_m_mat(t_matrix *m1, t_matrix *m2);
t_matrix	mat_x_mat(t_matrix *m1, t_matrix *m2);
t_matrix	mat_x_n(t_matrix *m, double n);
t_matrix	mat_pow(t_matrix *m, int n);
t_matrix	cpy_mat(t_matrix *m);
void		del_mat(t_matrix m);
void		disp_mat(t_matrix *m);

#endif /* MATRIX_H_ */
