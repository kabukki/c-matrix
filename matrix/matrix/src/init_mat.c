/*
** Made by Lucien LE-ROUX
** 
** Started on  Wed Mar  9 22:37:51 2016 Lucien LE-ROUX
** Last update Mon Apr 25 21:09:11 2016 Lucien LE-ROUX
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
