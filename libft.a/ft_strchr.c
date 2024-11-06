#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int		i;
	char	*str2;

	i = 0;
	str2 = str;
	while(str[i] != "/0")
	{
		if(str[i] == c)
		{
			return(&s2[i]);
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	ft_strchr("Salut c'est moi", 97);
	return(0);
}
