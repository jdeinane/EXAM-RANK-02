#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	rep;

	if (ac == 2)
	{
		rep = 1;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				rep += av[1][i] - 'a';
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				rep += av[1][i] - 'A';
			while (rep)
			{
				write(1, &av[1][i], 1);
				rep--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}