#include <unistd.h>

void	paramsum(int nb)
{
	if (nb > 9)
		paramsum(nb / 10);
	write(1, &"0123456789"[nb% 10], 1);
}

int	main(int ac, char **av)
{
	(void)av;
	paramsum(ac - 1);
	write(1, "\n", 1);
	return (0);
}