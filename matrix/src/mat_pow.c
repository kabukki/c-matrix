/*
** mat_pow.c for mat in /home/le-rou_c/docs/108trigo/lib/matrix
** 
** Made by Lucien LE-ROUX
** Login   <le-rou_c@epitech.net>
** 
** Started on  Wed Mar  9 22:41:35 2016 Lucien LE-ROUX
** Last update Wed Mar  9 22:41:58 2016 Lucien LE-ROUX
*/

#include "matrix.h"

t_matrix        mat_pow(t_matrix        *m,
                        int             n)
{
  t_matrix      res = cpy_mat(m);

  while (n-- > 1)
    res = mat_x_mat(&res, m);
  return (res);
}
