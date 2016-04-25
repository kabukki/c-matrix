/*
** Made by Lucien LE-ROUX
** 
** Started on  Wed Mar  9 22:40:12 2016 Lucien LE-ROUX
** Last update Mon Apr 25 21:09:51 2016 Lucien LE-ROUX
*/

#include "matrix.h"

t_matrix        mat_x_n(t_matrix        *m,
                        double           n)
{
  t_matrix      res = init_mat(m->MAT_H, m->MAT_W, NULL);
  int           i;

  for (i = 0; i < m->MAT_H * m->MAT_W; i++)
    res.mat[i] = m->mat[i] * n;
  return (res);
}
