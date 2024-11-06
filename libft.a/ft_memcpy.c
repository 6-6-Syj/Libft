#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char	*dest1;
	char	*src1;

	i = 0;
	dest1 = dest;
	src1 = src1;
	while(i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return(dest1);
}

int	main()
{
	ft_memcpy("Salut,  les gars", "Bonjour", 7);
	return(0);
}
