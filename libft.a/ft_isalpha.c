#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		printf("1");
		return(1);
	}
	printf("0");
	return(0);
}

int	main()
{
	ft_isalpha('0');
	return(0);
}
