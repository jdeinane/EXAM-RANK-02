char	*ft_strrev(char *str)
{
	char	tmp;
	int		i = -1;
	int		len = 0;

	while (str[len])
		len++;
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}


#include <stdio.h>
int	main()
{
	char	str[] = "refinnej";
	printf("%s\n", ft_strrev(str));
}