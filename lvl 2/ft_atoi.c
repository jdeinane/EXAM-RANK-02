int	ft_atoi(const char *str)
{
	int	i = 0;
	int	sign = 1;
	int	res = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res = res + str[i] - '0';
		i++;
	}
	return (res * sign);
}

#include <stdlib.h>
#include <stdio.h>
int	main()
{
	char	number[] = "+--1235453";
	printf("%d\n", ft_atoi(number));
	printf("%d\n", atoi(number));
}