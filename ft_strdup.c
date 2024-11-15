
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char				*str;
	int					len;
	int					i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	str = (char *)malloc((len + 1) * sizeof (char));
	if (str == NULL)
		return (NULL);
	while (i <= len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}