/*
** Epitech Security Lab
** http://esl.epitech.net - <staff@esl.epitech.eu>
**
** Mota, The Polish Plumber and Zerk wrote this.
** As long as you retain this notice you can do whatever
** you want with this stuff. If we meet some day, and you
** think this stuff is worth it, you can buy us [:drinks:]*
** in return.
*/

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h> /*include uint8_t */
#include "pepito.h"

#include "utils.h"

#define	NOTANUMBER 0xFFFF

/* Utils functions ---------------------------------------------- */
/*retour remove*/
void
die(char *fctName) {
  perror(fctName);
  if (remove("pepito.pid") == - 1)
    die("remove()");
  exit(EXIT_FAILURE);
}

char
getChar(void **p) {
  char			res;

  res = *(char *)(*p);
  (*p) += sizeof (res);
  return res;
}

int
getNumber(void **p, size_t *packetSize) {
  int 			res = 0;
  void			*save = *p;

  res = strtol(*p, (char **)p, 10);
  if (save == *p)
    return NOTANUMBER;
  *packetSize -= *p - save;
  return res;
}

/*retour malloc*/
char
*getStr(void **p, size_t *l) {
  int 			len;
  char 			*res = NULL;

  if ((len = getNumber(p, l)) > 0) {
    if ((res = malloc(len + 1)) == NULL)
      die("malloc()");
    res[len] = '\0';
    strncpy(res, *p, len);
    (*p) += len;
    (*l) -= len;
  }
  return res;
}
