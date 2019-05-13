#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 

   Compilation:
   gcc -o speedrun-005 -no-pie -Wno-format-security speedrun-005.c && strip speedrun-005

   Also need to give them the libc

 */

void say_hello()
{
   printf("Fifth time's the charm?\n");
}

void say_goodbye()
{
   printf("Safe, yet again.\n");
}

void what_do_they_say()
{
   char buf[1024];
   printf("What do you mean this time? ");
   read(0, buf, 1024);
   printf("Interesting ");
   printf(buf);
   printf(" food for thought\n");
}


int main(int argc, char** argv)
{
   setvbuf(stdout, NULL, _IONBF, 0);
   if (getenv("DEBUG") == NULL)
   {
	  alarm(5);
   }

   say_hello();
   what_do_they_say();
   say_goodbye();
}
