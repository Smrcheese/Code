#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;
	int flag;
	char store[30];

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			j=0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					k = 0;
					flag = 0;
					while (store[k] != '\0')
					{
						if (store[k] == argv[1][i])
							flag = 1;
						k++;
					}
					if(flag == 0)
					{
						store[k] = argv[1][i];
						write(1, &store[k], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
