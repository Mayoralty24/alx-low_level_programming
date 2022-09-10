#include <stdio.h>
#include <unistd.h>
 /**
 *main - program entry point
 **Return: Always 1
 */
int main(void)
{
	int s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");	
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
