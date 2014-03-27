/*
** my.h for my in /home/delta_q/rendu/sudoki-bi
** 
** Made by Delta Quentin
** Login   <delta_q@epitech.net>
** 
** Started on  Sat Mar  1 15:55:04 2014 Delta Quentin
** Last update Sun Mar  2 22:08:05 2014 Delta Quentin
*/

#ifndef MY_H_
# define MY_H_

typedef struct	s_sudo
{
  int	rd;
  char	buff[232];
}		t_sudo;

int	sudoki();
void	sudoki2(t_sudo *sudo);

#endif /* MY_H_ */
