#include <unistd.h>

/**
 * main - Entry point
 *
 * Descreption: print a quate using write function
 *	size_t write(int fd, conts void *buf, size_t count)
 *
 * Retern: 1 (error).
*/

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
