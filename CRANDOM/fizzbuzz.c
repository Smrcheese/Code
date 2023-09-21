#include <unistd.h>

void putnbr(int nb)
{
	char c;

	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	if ( nb > 9)
	{
		putnbr(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}

int main()
{
	int i;

	i = 0;
	while (i++ < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			putnbr(i);
			write(1, "\n", 1);
		}
	}
	return (0);
}