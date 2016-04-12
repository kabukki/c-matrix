/*
** del_mat.c for mat in /home/le-rou_c/docs/108trigo/lib/matrix
** 
** Made by Lucien LE-ROUX
** Login   <le-rou_c@epitech.net>
** 
** Started on  Wed Mar  9 22:38:30 2016 Lucien LE-ROUX
** Last update Wed Mar  9 22:38:38 2016 Lucien LE-ROUX
*/

#include "matrix.h"

void            del_mat(t_matrix        m)
{
  free(m.mat);
}
