/*
** mat_x_mat.c for mat in /home/le-rou_c/docs/108trigo/lib/matrix
** 
** Made by Lucien LE-ROUX
** Login   <le-rou_c@epitech.net>
** 
** Started on  Wed Mar  9 22:41:00 2016 Lucien LE-ROUX
** Last update Wed Mar  9 22:41:25 2016 Lucien LE-ROUX
*/

#include "matrix.h"

t_matrix        mat_x_mat(t_matrix      *m1,
                          t_matrix      *m2)
{
  if (m1->MAT_W != m2->MAT_H) {
    printf("Dimension error: cannot multiply matrices.\n");
    exit(84);
  }
  t_matrix      res = init_mat(m1->MAT_H, m2->MAT_W, NULL);
  double        tmp = 0;
  int           c = 0;
  int           i;

  for (c = 0; c < res.MAT_W * res.MAT_H; c++)
    {
      tmp = 0;
      for (i = c; i - c < m1->MAT_W; i++)
        tmp += m1->mat[i - c + (c/ m2->MAT_W) * m1->MAT_W] * m2->mat[(c % m2->MAT_W) + ((i - c) * m2->MAT_W)];
      res.mat[c] = tmp;
    }
  return (res);
}
