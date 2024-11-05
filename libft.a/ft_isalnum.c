#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') 
		|| (c >= 'a' && c <= 'z')
		|| (c >= 0 && c <= 9))
	{
		printf("1");
		return(1);
	}
	printf("0");
	return(0);
}

int	main()
{
	ft_isalnum('g');
	return (0);
}
