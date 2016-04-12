/*
** id_mat.c for mat in /home/le-rou_c/docs/108trigo/lib/matrix
** 
** Made by Lucien LE-ROUX
** Login   <le-rou_c@epitech.net>
** 
** Started on  Wed Mar  9 22:38:46 2016 Lucien LE-ROUX
** Last update Wed Mar  9 22:38:56 2016 Lucien LE-ROUX
*/

#include "matrix.h"

t_matrix        id_mat(int      dim)
{
  t_matrix      new = init_mat(dim, dim, NULL);
  int           i;

  for (i = 0; i < dim*dim; i++)
    new.mat[i] = (i % (dim + 1) == 0) ? 1 : 0;
  return (new);
}
