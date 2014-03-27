/*
** sudoki2.c for sudoki in /home/rosey/rendu/sudoki-bi
** 
** Made by rosey
** Login   <rosey@epitech.net>
** 
** Started on  Sun Mar  2 14:54:05 2014 rosey
** Last update Sun Mar  2 22:08:59 2014 Delta Quentin
*/

#include "my.h"

int	check_line(t_sudo *sudo)
{
  int	nb;
  int	cpt;
  int	i;

  i = 0;
  nb = 1;
  while (cpt != 21)
    {
      while (sudo->buff[i] != '\0')
	{
	  if (sudo->buff [i])
	    if (sudo->buff[i] == '\n')
	      i++;
	  cpt++;
	  nb++;
	}
      check_col(&*sudo);
    }
  return (0);
}

int	check_col(t_sudo *sudo)
{
  (void)sudo;
  return (0);
}
