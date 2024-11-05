#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		printf("1");
		return(1);
	}
	printf("0");
	return(0);
}

int	main()
{
	ft_isdigit(555);
	return(0);
}
