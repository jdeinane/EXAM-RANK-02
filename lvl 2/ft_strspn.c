// PAS BON !!
#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i = 0;
	int	j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}


#include <stdio.h>
#include <string.h>
int	main()
{
	const char	s[] = "jsp";
	const char	accept[] = "vraiment";

	printf("%lu\n", ft_strspn(s, accept));
	printf("%lu\n", strspn(s, accept));
}

