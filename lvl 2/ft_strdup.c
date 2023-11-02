#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i = 0;
	int		len = 0;

	while (src[len])
		len++;
	dup = malloc(sizeof(*dup) * (len + 1));
	if (dup != NULL)
	{
		while (src[i])
		{
			dup[i] = src[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char	str[] = "hello bonjour ca va :)";

	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
}