#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	nb1 = atoi(av[1]);
	int	nb2 = atoi(av[3]);

	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d", (nb1 + nb2));
		if (av[2][0] == '-')
			printf("%d", (nb1 - nb2));
		if (av[2][0] == '*')
			printf("%d", (nb1 * nb2));
		if (av[2][0] == '/')
			printf("%d", (nb1 / nb2));
		if (av[2][0] == '%')
			printf("%d", (nb1 % nb2));
	}
	printf("\n");
	return (0);
}