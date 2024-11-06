#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = s;
	while(i < n)
	{
		s2[i] = c;
		i++;
	}
	return(s);
}

int	main()
{
	ft_memset("Bonjour les crapules", 10, 7);
	return(0);
}
