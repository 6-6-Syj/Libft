#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*s2;

	s2 = s;
	while(i < n)
	{
		s2[i] = "/0";
		i++;
	}
}

int	main()
{
	ft_bzero("Yoooo", 2);
	return(0);
}
