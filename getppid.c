#include <stdio.h>
#include <unistd.h>

/**
 * main - parent pid
 *
 * Return :Always 0
 *
 */

int main ()
{
	pid_t my_ppid;
	my_ppid = getppid();
	printf("%d\n", my_ppid);
	return (0);
}
