/*
** Made by Lucien LE-ROUX
**
** Started on  Wed Mar  9 22:39:48 2016 Lucien LE-ROUX
** Last update Mon Apr 25 21:08:43 2016 Lucien LE-ROUX
*/

#include "matrix.h"

void            disp_mat(t_matrix       *m)
{
  int           i;

  for (i = 0; i < m->MAT_H*m->MAT_W; i++)
    {
      printf(((i + 1) % m->MAT_W != 0) ? ("%.2f\t") : ("%.2f\n"), m->mat[i]);
      fflush(stdout);
    }
}
