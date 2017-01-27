/*
** my.h for 104intersection in /home/rieux-_t/Documents/rendu/Maths/104intersection/include
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Tue Dec 16 16:34:18 2014 thomas rieux-laucat
** Last update Wed Feb 11 17:16:56 2015 Ploujoux Christophe
*/

#ifndef MY_H_
# define MY_H_

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <SDL/SDL.h>

unsigned long	Color(int R, int G, int B);
void		PutPixel(SDL_Surface *surface, int x, int y, unsigned long pixel);
void		drawLine(SDL_Surface* surf,int x1,int y1, int x2,int y2, int R, int G, int B);
void		pause();
void		axe(SDL_Surface *screen, char **av);
int		main(int argc, char **argv);
int		check_number(int ac, char **av);
int		check_arg(int ac);

#endif /* !MY_H_ */
