#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int		i = 0;
	char	*res;

	if (nbr == "-2147483648")
		return ("-2147483648\0");
	if (nbr <= 0)
		i++;
	while (nbr)
	{
		n /= 10;
		i++;
	}
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res[i]= '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		res[--i] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}