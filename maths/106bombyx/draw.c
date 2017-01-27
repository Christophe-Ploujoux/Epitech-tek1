/*
** draw.c for draw in /home/ploujo_c/rendu/maths/106bombyx
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Feb 10 12:31:40 2015 Ploujoux Christophe
** Last update Tue Feb 10 13:01:16 2015 Ploujoux Christophe
*/

#include <SDL/SDL.h>

unsigned long Color(int R, int G, int B)
{
  return 65536*R + 256*G + B;
}

void		PutPixel(SDL_Surface *surface, int x, int y, unsigned long pixel)
{
  int		bpp = surface->format->BytesPerPixel;
  unsigned char	*p = (unsigned char *)surface->pixels + y * surface->pitch + x * bpp;
  if (bpp==4)
    *(unsigned long*)p = pixel;
}

void		drawLine(SDL_Surface* surf,int x1,int y1, int x2,int y2, int R, int G, int B)
{
  unsigned long	couleur = Color(R, G, B);
  int		x,y;
  int		Dx,Dy;
  int		xincr,yincr;
  int		erreur;
  int		i;

  Dx = abs(x2-x1);
  Dy = abs(y2-y1);
  if(x1<x2)
    xincr = 1;
  else
    xincr = -1;
  if(y1<y2)
    yincr = 1;
  else
    yincr = -1;
  x = x1;
  y = y1;
  if(Dx>Dy)
    {
      erreur = Dx/2;
      for(i=0;i<Dx;i++)
	{
	  x += xincr;
	  erreur += Dy;
	  if(erreur>Dx)
	    {
	      erreur -= Dx;
	      y += yincr;
	    }
	  PutPixel(surf,x, y,couleur);
	}
    }
  else
    {
      erreur = Dy/2;
      for(i=0;i<Dy;i++)
	{
	  y += yincr;
	  erreur += Dx;
	  if(erreur>Dy)
	    {
	      erreur -= Dy;
	      x += xincr;
	    }
	  PutPixel(surf,x, y,couleur);
	}
    }
}
