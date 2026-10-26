#include <unistd.h>
#include <string.h>
/**
 * main - Print a message to the standartd error
 *
 * Return: Always 1
 */
int main(void)
{

	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      60 - 1);

		return (1);
}
