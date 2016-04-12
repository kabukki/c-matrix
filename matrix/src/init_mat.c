/*
** init_mat.c for mat in /home/le-rou_c/docs/108trigo/lib/matrix
** 
** Made by Lucien LE-ROUX
** Login   <le-rou_c@epitech.net>
** 
** Started on  Wed Mar  9 22:37:51 2016 Lucien LE-ROUX
** Last update Wed Mar  9 22:38:19 2016 Lucien LE-ROUX
*/

#include "matrix.h"

t_matrix        init_mat(int    height,
                         int    width,
                         char   **values)
{
  t_matrix      matrix;
  int           i = 0;

  if ((matrix.mat = malloc((1 + width * height) * sizeof(double))) == NULL)
    exit(84);
  matrix.MAT_H = height;
  matrix.MAT_W = width;
  if (values != NULL)
    for (i; i < width * height && values[i]; i++)
      matrix.mat[i] = atof(values[i]);
  for (i; i < width * height; i++)
    matrix.mat[i] = 0;
  return (matrix);
}
