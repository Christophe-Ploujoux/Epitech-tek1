/*
** Epitech Security Lab
** http://esl.epitech.net - <staff@esl.epitech.eu>
**
** Zerk wrote this.
** As long as you retain this notice you can do whatever
** you want with this stuff. If we meet some day, and you
** think this stuff is worth it, you can buy me a Chimay
** blue in return.
*/

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <unistd.h>

#include <sys/stat.h>

#include "pepito.h"
#include "utils.h" /*rajout include*/
#include "daemon.h"
#include "network.h"

/* Main daemon functions ---------------------------------------- */

/* sig */
void
sigHandler(int sig)
{
  switch (sig) {
  case SIGINT:
    if (fprintf(stderr, "Process received SIGINT.\n" \
	    "Exiting\n") < 0)
      die("fprintf()");
    break;
  case SIGTERM:
    if (fprintf(stderr, "Process received SIGTERM.\n" \
	    "Exiting\n") < 0)
      die("fprintf()");
    break;
  }
  remove("pepito.pid");
  exit(EXIT_SUCCESS);
}

/* run */
int
checkOtherProcess(void)
{
  struct stat		buf;

  if (stat("pepito.pid", &buf) == 0) {
    fprintf(stderr, "Daemon is already running.\n"	  \
	    "If it's not, please check 'pepito.pid'.\n"	  \
	    "Exiting\n");
    die("fprintf()");
  }
  return 0;
}

int
savePid(void)
{
  FILE*			pidFile;
  pid_t			pid;

  if (!(pidFile = fopen("pepito.pid", "rw"))) {
    die("fopen()");
    if (fprintf(stderr, "Cannot save process id.\n" \
	    "Exiting\n") < 0)
      die("fprintf()");
    die("fprintf()");
  }
  pid = getpid();
  if (fprintf(pidFile, "%i", pid) < 0)
      die("fprintf()");
  if (fclose(pidFile) == EOF)
      die("fclose()");
  return 0;
}

int
runDaemon(int debug)
{
  char			packetPtr[PACKETLEN];
  size_t	       	packetSize;
  struct sockaddr_in	sa;

  if (checkOtherProcess())
    return EXIT_FAILURE;
  if (signal(SIGTERM, sigHandler) == SIG_ERR)
    die("signal()");
  if (signal(SIGINT, sigHandler) == SIG_ERR)
    die("signalf()");
  if (signal(SIGUSR1, sigHandler) == SIG_ERR)
    die("signal()");

  if (!debug) {
    daemon(1, 1);
    if (savePid())
      return EXIT_FAILURE;
  }

  if (fprintf(stderr, "Daemon started\n") < 0)
    die("fprintf()");
  initConnection(&sa);
  while (1) {
    setClient(acceptClient(&sa));
    bzero(packetPtr, PACKETLEN);
    getPacket(packetPtr, &packetSize);
    handlePacket(packetPtr, packetSize);
    setClient(-1);
  }
  setSock(-1);
  return EXIT_SUCCESS;
}

/* stop */
int
stopDaemon(void)
{
  int			pid;
  FILE*			pidFile;

  if ((pidFile = fopen("pepito.pid", "r")) == NULL)
    return EXIT_SUCCESS;
  if (fscanf(pidFile, "%i", &pid) == EOF)
    die("fscanf()");
  kill(pid, SIGUSR1);
  if (fprintf(stderr, "Stopping daemon (%i)\n", pid) < 0)
    die("fprintf()");
  if (remove("pepito.pid") == -1)
    die("remove()");
  return EXIT_SUCCESS;
}
