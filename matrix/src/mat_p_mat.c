/*
** Made by Lucien LE-ROUX
** 
** Started on  Wed Mar  9 22:40:28 2016 Lucien LE-ROUX
** Last update Mon Apr 25 21:09:30 2016 Lucien LE-ROUX
*/

#include "matrix.h"

t_matrix        mat_p_mat(t_matrix      *m1,
                          t_matrix     *m2)
{
  if (m1->MAT_W != m2->MAT_W || m1->MAT_H != m2->MAT_H) {
    printf("Dimension error: cannot add matrices.\n");
    exit(84);
  }
  t_matrix      res = init_mat(m1->MAT_H, m2->MAT_W, NULL);
  int           i;

  for (i = 0; i < m1->MAT_W * m1->MAT_H; i++)
    res.mat[i] = m1->mat[i] + m2->mat[i];
  return (res);
}
