/*
** mat_m_mat.c for mat in /home/le-rou_c/docs/108trigo/lib/matrix
** 
** Made by Lucien LE-ROUX
** Login   <le-rou_c@epitech.net>
** 
** Started on  Wed Mar  9 22:40:46 2016 Lucien LE-ROUX
** Last update Wed Mar  9 22:40:54 2016 Lucien LE-ROUX
*/

#include "matrix.h"

t_matrix        mat_m_mat(t_matrix      *m1,
                          t_matrix     *m2)
{
  if (m1->MAT_W != m2->MAT_W || m1->MAT_H != m2->MAT_H) {
    printf("Dimension error: cannot substract matrices.\n");
    exit(84);
  }
  t_matrix      res = init_mat(m1->MAT_H, m2->MAT_W, NULL);
  int           i;

  for (i = 0; i < m1->MAT_W * m1->MAT_H; i++)
    res.mat[i] = m1->mat[i] - m2->mat[i];
  return (res);
}
