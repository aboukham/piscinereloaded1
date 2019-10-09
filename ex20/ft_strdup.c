#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while(src[i])
		i++;
	if (!(dest = (char*)malloc(sizeof(char) * i)))
		return (0);
	i = 0;
	while (src[i])
		dest[i] = src[i++];
	dest[i] = '\0';
	return (dest);
}
