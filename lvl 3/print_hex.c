#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i = 0;
	int	nb;

	while (str[i])
	{
		nb = nb * 10;
		nb = nb + str[i] - '0';
		i++;
	}
	return (nb);
}

void	print_hex(int nb)
{
	char	hex_digits[] = "0123456789abcdef";
	if (nb > 16)
		print_hex(nb / 16);
	write(1, &hex_digits[nb % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}