#include "unistd.h"
#include "stdlib.h"

#include "stdio.h"

char	*ft_memset(char *b, int c, int len)
{
	char *ptr;
	int i;
	ptr = b;
	i = 0;
	while (i < len)
		*(ptr + i++) = c;
	return (b);
}

int		ft_wordcount(char const *str, char c)
{
	int count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int		get_word_len(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char *ft_strnew(int size)
{
	char *s;

	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**str2;

	if (!s || !(str2 = (char **)malloc(sizeof(*str2) *
		(ft_wordcount(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_wordcount(s, c))
	{
		k = 0;
		if (!(str2[i] = ft_strnew(get_word_len(&s[j], c) + 1)))
			str2[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str2[i][k++] = s[j++];
		str2[i][k] = '\0';
	}
	str2[i] = 0;
	return (str2);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_strsplit(av[1], 32)[0]);
		printf("%s\n", ft_strsplit(av[1], 32)[1]);
	}
	write(1, "\n", 1);
	return 0;
}
