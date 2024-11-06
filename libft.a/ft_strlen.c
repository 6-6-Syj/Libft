#include "libft.h"

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while(c[i] != "/0")
		i++;
	return(i);
}

int	main()
{
	ft_strlen("combien ?");
	return(0);
}
