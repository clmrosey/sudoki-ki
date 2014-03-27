/*
** sudoki.c for sudoki in /home/delta_q/rendu/sudoki-bi
** 
** Made by Delta Quentin
** Login   <delta_q@epitech.net>
** 
** Started on  Sat Mar  1 08:37:42 2014 Delta Quentin
** Last update Sun Mar  2 22:07:52 2014 Delta Quentin
*/

#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void	sudoki2(t_sudo *sudo)
{
  int	i;

  i = 0;
  while (sudo->buff[i] != '\0')
    {
      if (sudo->buff[i - 1] == 32)
	{
	  if (sudo->buff[i + 1] == 32 || sudo->buff[i + 1] == '|')
	    if (!(sudo->buff[i] > 47 && sudo->buff[i] < 58))
	      sudo->buff[i] = '0';
	}
      i++;
    }
}

int		sudoki()
{
  t_sudo	sudo;
  int		i;

  if ((sudo.rd = read(0, sudo.buff, 231)) == -1)
    return (0);
  sudo.buff[sudo.rd] = '\0';
  printf("%s\n", sudo.buff);
  while (sudo.buff[i] != '\0')
    {
      if (sudo.buff[i] < '0' || sudo.buff[i] > '9')
	if (sudo.buff[i] != '-' && sudo.buff[i] != '|')
	  if (sudo.buff[i] != 32 && sudo.buff[i] != '\n')
	    {
	      printf("Invalid caracter found: %c \n", sudo.buff[i]);
	      return (0);
	    }
      i++;
    }
  sudoki2(&sudo);
  printf("%s\n", sudo.buff);
  return (0);
}

int	main()
{
  sudoki();
  return (0);
}
