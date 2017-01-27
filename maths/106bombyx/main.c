/*
** main.c for 106bombyx in /home/rieux-_t/Documents/Rendu/Maths/106bombyx
** 
** Made by Thomas Rieux-Laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Mon Feb  9 15:44:01 2015 Thomas Rieux-Laucat
** Last update Sat Feb 21 18:49:31 2015 Thomas Rieux-Laucat
*/

#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include "my.h"

void	pause()
{
  SDL_Event event;
  int	continuer = 1;

  while(continuer)
    {
      SDL_WaitEvent(&event);
      switch (event.type)
	{
	case SDL_QUIT:
	  continuer = 0;
	}
    }
}

void		draw_first(SDL_Surface *screen, SDL_Rect axe)
{
  int		c = 0;
  SDL_Surface	*text = NULL, *text2 = NULL, *text3 = NULL, *nbry = NULL;
  TTF_Font	*police = NULL, *police2 = NULL;
  SDL_Color	black = {0, 0, 0, 0};

  police = TTF_OpenFont("FromCartoonBlocks.ttf", 30);
  police2 = TTF_OpenFont("FromCartoonBlocks.ttf", 23);
  text = TTF_RenderText_Blended(police, "           |            |            |            |            |            |            |            |            |           >", black);
  nbry = TTF_RenderText_Blended(police2, "0          10          20          30          40          50          60          70           80          90            ", black);
  text2 = TTF_RenderText_Blended(police, "_", black);
  text3 = TTF_RenderText_Blended(police, "^", black);
  axe.x = 50;
  axe.y = 943;
  SDL_BlitSurface(text, NULL, screen, &axe);
  axe.x = 26;
  axe.y = 850;
  SDL_BlitSurface(text2, NULL, screen, &axe);
  while (c < 9)
    {
      axe.y = axe.y - 83;
      SDL_BlitSurface(text2, NULL, screen, &axe);
      c++;
    }
  axe.x = 35;
  axe.y = axe.y - 83;
  SDL_BlitSurface(text3, NULL, screen, &axe);
  axe.x = 35;
  axe.y = 968;
  SDL_BlitSurface(nbry, NULL, screen, &axe);
}

void		axe(SDL_Surface *screen, char **av)
{
  int		i = 40;
  int		j = 40;
  double	k = atof(av[1]);
  SDL_Surface	*point = NULL;
  SDL_Rect	axe;
  double	x1 = 10;
  int		save_y = 0;
  int		save_x = 0;

  point = SDL_CreateRGBSurface(SDL_HWSURFACE, 1, 1, 32, 0, 0, 0, 0);
  SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 255, 255, 255));
  while (i < 960)
    {
      axe.x = i;
      axe.y = 960;
      SDL_BlitSurface(point, NULL, screen, &axe);
      i++;
    }
  while (j < 960)
    {
      axe.x = 40;
      axe.y = j;
      SDL_BlitSurface(point, NULL, screen, &axe);
      j++;
    }
  i = 0;
  axe.y =  960 - 10;
  axe.x = 40 + 10;
  x1 = 10;
  while (i < 920)
    {
      if (i % 15 == 0)
	{
	  save_y = axe.y;
	  save_x = axe.x;
	  if (i != 0)
	    {
	      axe.x = i + 40;
	      axe.y = k * x1 * (1000 - x1) / 1000;
	      x1 = axe.y;
	      axe.y = 960 - axe.y;
	    }
	  drawLine(screen, save_x, save_y, axe.x, axe.y, 155, 200, 20);
	}
      i++;
    }
  draw_first(screen, axe);
  SDL_Flip(screen);
}

int	main(int argc, char **argv)
{
  SDL_Surface *ecran = NULL;

  if (check_arg(argc) == -1)
    return (-1);
  if (check_number(argc, argv) == -1)
    return (-1);
  if (argc == 2)
    {
      TTF_Init();
      SDL_Init(SDL_INIT_VIDEO);
      ecran = SDL_SetVideoMode(1000, 1000, 32, SDL_HWSURFACE);
      SDL_WM_SetCaption("Bombyx avec SDL!", NULL);
      axe(ecran, argv);
      pause();
      SDL_Quit();
    }
  return (0);
}
