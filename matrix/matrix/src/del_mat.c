/*
** Made by Lucien LE-ROUX
**
** Started on  Wed Mar  9 22:38:30 2016 Lucien LE-ROUX
** Last update Mon Apr 25 21:07:15 2016 Lucien LE-ROUX
*/

#include "matrix.h"

void            del_mat(t_matrix        m)
{
  free(m.mat);
}
