/*
** Made by Lucien LE-ROUX
** 
** Started on  Wed Mar  9 22:41:35 2016 Lucien LE-ROUX
** Last update Mon Apr 25 21:09:38 2016 Lucien LE-ROUX
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
