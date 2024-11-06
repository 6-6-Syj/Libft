#include "libft.h"

/* REPLACE BY STRLEN (J) */

size_t	ft_strlcpy(char *dest, const char *src, size_t size);
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if(size == 0)
	{
		while(src[j] != "/0")
			j++;
		return(j);
	}
	while(src[i] != "/0" && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = "/0";
	while(src[j] != "/0")
		j++;
	return(j);
}
