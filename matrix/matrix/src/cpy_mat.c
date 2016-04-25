/*
** Made by Lucien LE-ROUX
**
** Started on  Wed Mar  9 22:39:03 2016 Lucien LE-ROUX
** Last update Mon Apr 25 21:08:24 2016 Lucien LE-ROUX
*/

#include "matrix.h"

t_matrix        cpy_mat(t_matrix        *m)
{
  t_matrix      new = init_mat(m->MAT_H, m->MAT_W, NULL);
  int           i;

  for (i = 0; i < m->MAT_H * m->MAT_W; i++)
    new.mat[i] = m->mat[i];
  return (new);
}
