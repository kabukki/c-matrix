/*
** disp_mat.c for mat in /home/le-rou_c/docs/108trigo/lib/matrix
** 
** Made by Lucien LE-ROUX
** Login   <le-rou_c@epitech.net>
** 
** Started on  Wed Mar  9 22:39:48 2016 Lucien LE-ROUX
** Last update Sat Mar 26 16:57:39 2016 Lucien LE-ROUX
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
